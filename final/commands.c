#include "infobot.h"

void	ft_help_print(struct discord *client, const struct discord_message *event)
{
	char	*text;
	text = "The following commands are available:\n!submit - Submit your run for verification\n!rules - Display the rules for the ER Any% Glitchless category\n!deadline - Display the deadline for submitting your run";
	struct discord_create_message params = { .content = text };
	discord_create_message(client, event->channel_id, &params, NULL);
}

void	ft_submission_print(struct discord *client, const struct discord_message *event)
{
	char	*text;
	text = "Submit your run for verification here: https://docs.google.com/forms/d/1_pv3bgwU_ayyxO-1K7uUDanZQOE53jUgyIj_DJsqLKA/closedform";
	struct discord_create_message params = { .content = text };
	discord_create_message(client, event->channel_id, &params, NULL);
}

void	ft_rules_print(struct discord *client, const struct discord_message *event)
{
	char	*text;
	text = "According to the ER Any% Glitchless ruleset:\n\nSequence breaks are allowed, as long as they meet the following criteria:\n- They are purely based on movement and game mechanics, but don't rely on the execution of other glitches or quitouts.\n- They don't go through areas that can be considered out-of-bounds.\n- They do not allow you to **proceed through an area without having defeated the boss(es) that would normally block progress.**";
	struct discord_create_message params = { .content = text };
	discord_create_message(client, event->channel_id, &params, NULL);
}

void	ft_deadline_print(struct discord *client, const struct discord_message *event)
{
	char	*text;
	text = "The current Deadline has expired. Please wait for the next event to be announced.";
	struct discord_create_message params = { .content = text };
	discord_create_message(client, event->channel_id, &params, NULL);
}
