/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:08:12 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:48:44 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>
#include <stdlib.h>
#include <unistd.h>

int	errors_files(char *str, t_chars *ch)
{
	int	count;
	int	wight;

	wight = 0;
	while (1)
	{
		count = 0;
		while (*str != '\n')
		{
			if (*str != ch->trap && *str != ch->empty)
				return (1);
			++count;
			++str;
		}
		++str;
		++wight;
		if (ch->lenght != count)
			return (1);
		if (ch->wight == wight)
			break ;
	}
	return (0);
}

int	check_back_slash_n(char *str, t_chars *ch)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == '\n')
			++i;
		++str;
	}
	ch->line_count = i;
	if (ch->wight != i)
		return (1);
	return (0);
}

int	check_fd(t_filed *filed)
{
	if (filed->fd == -1)
	{
		filed->i++;
		write (2, "map error\n", 10);
		return (1);
	}
	return (0);
}
