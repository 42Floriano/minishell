/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:49:41 by falberti          #+#    #+#             */
/*   Updated: 2024/06/19 10:55:11 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static	int	init_parsing(char *str, t_data *data)
{

	(void)data;
	if (*str != 0)
		printf("%s\n", str);
	is_exit(str);
	return (0);
}

void	get_input(t_data *data)
{
	char	*line;

	(void)data;
	while (1)
	{
		run_signal(1);
		//printf("%s", data->nprompt);
		line = readline("minishell> ");
		if (line == NULL)
		{
			perror("read line failed");
			exit(0);
		}
		if (*line)
		add_history(line);
		init_parsing(line, data);
		free(line);
		line = NULL;
	}
	return ;
}
