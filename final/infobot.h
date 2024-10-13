#ifndef INFOBOT_H
# define INFOBOT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <concord/discord.h>
#include <concord/log.h>

void	ft_rules_print(struct discord *client, const struct discord_message *event);
void	ft_deadline_print(struct discord *client, const struct discord_message *event);
void	on_ready(struct discord *client, const struct discord_ready *event);
void	ft_command(struct discord *client);
void	ft_help_print(struct discord *client, const struct discord_message *event);
void	ft_submission_print(struct discord *client, const struct discord_message *event);

#endif