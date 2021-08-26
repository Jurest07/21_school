/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:08:32 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:49:02 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>
#include <head.h>
#include <stdlib.h>

void	freedom(char **mas, int *matrix, t_chars *ch)
{
	int	i;

	i = 0;
	while (i <= ch->line_count - 1)
	{
		free(mas[i]);
		++i;
	}
	free(mas);
	free(matrix);
	free(ch);
}

void	freedom_without_matrix(char **mas, t_chars *ch)
{
	int	i;

	i = 0;
	while (i <= ch->line_count - 1)
	{
		free(mas[i]);
		++i;
	}
	free(mas);
	free(ch);
}
