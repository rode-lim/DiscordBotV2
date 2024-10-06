#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#include <concord/discord.h>
#include <concord/log.h>

char *ft_get_random_text(char **text)
{
    const char *messages[] = { "Breathe Oxygen", "Fight a Goblin", "Dance G", "<t:1735084800>"};
    size_t num_messages = sizeof(messages) / sizeof(messages[0]);

    srand(time(NULL));

    const char *random_message = messages[rand() % num_messages];

    *text = (char *)random_message;

    return *text;
}

void    ola(struct discord *client, const struct discord_message *event)
{
    char *text;
    ft_get_random_text(&text);
    struct discord_create_message params = { .content = text };
    if (event->author->bot)
    {
        return;
    }
    else
    {
        discord_create_message(client, event->channel_id, &params, NULL);
    }
}

void    on_ready(struct discord *client, const struct discord_ready *event)
{
    log_info("Bot succesfully connected to Discord under: %s#%s",
             event->user->username, event->user->discriminator);
}

int    main(void)
{
    struct discord    *client;
    ccord_global_init();
    client = discord_init("YOUR BOT TOKEN");

    discord_set_on_ready(client, &on_ready);

    discord_set_prefix(client, "!");
    discord_set_on_command(client, "daily_tasks", &ola);
    discord_run(client);
    discord_cleanup(client);
    ccord_global_cleanup();
}
