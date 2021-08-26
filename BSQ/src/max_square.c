/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:13:20 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:50:48 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <jrs_header.h>

int	min_value(int a, int b, int c)
{
	int	res;

	if (a < b)
		res = a;
	else
		res = b;
	if (res < c)
		return (res);
	else
		return (c);
}

void	add_value(t_square *res, int value, int x, int y)
{
	res->value = value;
	res->x_coord = x;
	res->y_coord = y;
}

void	max_square_part_2(t_square *res, int *matrix, int *map, t_iters iters)
{
	iters.j = 0;
	while (iters.j < iters.k)
	{
		if (iters.i == 0 || iters.j == 0)
			map[iters.i * iters.k + iters.j]
				= matrix[iters.i * iters.k + iters.j];
		else if (matrix[iters.i * iters.k + iters.j] > 0)
		{
			map[iters.i * iters.k + iters.j] = 1
				+ min_value(map[iters.i * iters.k + iters.j - 1],
					map[(iters.i - 1) *iters.k + iters.j],
					map[(iters.i - 1) *iters.k + iters.j - 1]);
		}
		if (map[iters.i * iters.k + iters.j] > res->value)
			add_value(res, map[iters.i * iters.k + iters.j],
				iters.j, iters.i);
		(iters.j)++;
	}
}

t_square	max_square(int *matrix, int l, int w)
{
	t_iters		iters;
	t_square	result;
	int			*map;

	iters.i = 0;
	iters.k = l;
	result = adt_t_square();
	map = adt_map(l, w);
	while (iters.i < w)
	{
		max_square_part_2(&result, matrix, map, iters);
		(iters.i)++;
	}
	free(map);
	return (result);
}
