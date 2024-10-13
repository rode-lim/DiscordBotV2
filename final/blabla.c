#include "infobot.h"

//https://docs.google.com/forms/d/1_pv3bgwU_ayyxO-1K7uUDanZQOE53jUgyIj_DJsqLKA/closedform

void	on_ready(struct discord *client, const struct discord_ready *event)
{
	log_info("Bot succesfully connected to Discord under: %s#%s",
			 event->user->username, event->user->discriminator);
}

void	ft_command(struct discord *client)
{
	discord_set_on_command(client, "help", &ft_help_print);
	discord_set_on_command(client, "submit", &ft_submission_print);
	discord_set_on_command(client, "rules", &ft_rules_print);
	discord_set_on_command(client, "deadline", &ft_deadline_print);
}

int	main(void)
{
	struct discord	*client;
	ccord_global_init();
	client = discord_init("YOUR BOT TOKEN");

	discord_set_on_ready(client, &on_ready);

	discord_set_prefix(client, "!");
	ft_command(client);
	discord_run(client);
	discord_cleanup(client);
	ccord_global_cleanup();
}
