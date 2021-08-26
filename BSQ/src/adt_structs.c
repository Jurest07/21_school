/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adt_structs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:16:06 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:47:29 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <jrs_header.h>

t_chars	adt_t_chars(void)
{
	t_chars	data;

	data.wight = 0;
	data.empty = '0';
	data.trap = '0';
	data.full = '0';
	data.lenght = 0;
	return (data);
}

t_square	adt_t_square(void)
{
	t_square	a;

	a.value = 0;
	a.x_coord = 0;
	a.y_coord = 0;
	return (a);
}

int	*adt_map(int lenght, int wight)
{
	int	*map;
	int	i;
	int	j;

	i = 0;
	j = 0;
	map = (int *) malloc(sizeof(int) * lenght * wight);
	while (i < wight)
	{
		j = 0;
		while (j < lenght)
		{
			map[i * lenght + j] = 0;
			++j;
		}
		++i;
	}
	return (map);
}

void	adt_iters(t_iters *iters)
{
	iters->i = 0;
	iters->j = 0;
	iters->k = 0;
	iters->p = 0;
}

void	adt_all_structs(t_chars **ch,
						int **matrix,
						char ***mas,
						t_square *square)
{
	*ch = NULL;
	*matrix = NULL;
	*mas = NULL;
	*square = adt_t_square();
}
