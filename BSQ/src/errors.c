/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:08:12 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 21:20:49 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>
#include <unistd.h>
#include <stdlib.h>

void	print_error(t_chars *ch, int *matrix, char **mas)
{
	if (matrix == NULL && mas == NULL && ch != NULL)
	{
		write(2, "map error\n", 10);
		free(ch);
		exit (0);
	}
	if (matrix == NULL && mas != NULL && ch != NULL)
	{
		write(2, "map error\n", 10);
		freedom_without_matrix(mas, ch);
		exit (0);
	}
}

void	print_error_not_exit(t_chars *ch, int *matrix, char **mas, char *str)
{
	if (str == NULL && matrix == NULL && mas == NULL && ch != NULL)
	{
		write(2, "map error\n", 10);
		free(ch);
		return ;
	}
	if (str != NULL && matrix == NULL && mas == NULL && ch != NULL)
	{
		write(2, "map error\n", 10);
		free(str);
		free(ch);
		return ;
	}
}

int	errors(char *str, t_chars *ch)
{
	if (jrs_strlen(str) != ch->lenght)
		return (0);
	while (*str)
	{
		if (*str != ch->trap && *str != ch->empty)
			return (0);
		++str;
	}
	return (1);
}

int	fst_line_err(t_chars *fst)
{
	if (fst->full == fst->trap || fst->full == fst->empty
		|| fst->trap == fst->empty)
		return (0);
	if (fst->full < 32 || fst->full > 126 || fst->trap < 32
		|| fst->trap > 126 || fst->empty < 32 || fst->empty > 126)
		return (0);
	return (1);
}

void	pars(char *str, int lenght, char *****mas, int t)
{
	int	i;

	i = -1;
	--t;
	(***mas)[t] = (char *)malloc(sizeof(char) * (lenght + 1));
	(***mas)[t][lenght] = '\0';
	while (++i < lenght)
		(***mas)[t][i] = str[i];
}
