/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_maps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:15:13 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:39:23 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <jrs_header.h>
#include <unistd.h>

int	*convert_maps(t_chars data, char **str)
{
	int		*matrix;
	t_iters	iters;

	adt_iters(&iters);
	matrix = (int *)malloc(sizeof(int) * data.lenght * data.wight);
	while (iters.i < data.wight)
	{
		iters.j = 0;
		while (iters.j < data.lenght)
		{
			if (str[iters.i][iters.j] == data.empty)
				matrix[iters.i * data.lenght + iters.j] = 1;
			if (str[iters.i][iters.j] == data.trap)
				matrix[iters.i * data.lenght + iters.j] = 0;
			(iters.j)++;
		}
		(iters.i)++;
	}
	return (matrix);
}

void	print_square_part_2(
		char **str,
		t_square result,
		t_chars data,
		t_iters iters)
{
	iters.j = 0;
	while (iters.j < data.lenght)
	{
		if (result.x_coord - iters.j <= result.value - 1
			&& result.x_coord - iters.j >= 0)
		{
			if (result.y_coord - iters.i <= result.value - 1
				&& result.y_coord - iters.i >= 0)
				write(1, &data.full, 1);
			else if (str[iters.i][iters.j] == data.trap)
				write(1, &data.trap, 1);
			else
				write(1, &data.empty, 1);
		}
		else if (str[iters.i][iters.j] == data.trap)
			write(1, &data.trap, 1);
		else
			write(1, &data.empty, 1);
		(iters.j)++;
	}
}

void	print_square(char **str, t_square result, t_chars data)
{
	t_iters	iters;

	adt_iters(&iters);
	while (iters.i < data.wight)
	{
		print_square_part_2(str, result, data, iters);
		write(1, "\n", 1);
		(iters.i)++;
	}
}
