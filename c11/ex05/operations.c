/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:38:36 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 16:43:15 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opers.h"

int	plus(int num1, int num2, int *succees)
{
	int	res;

	res = num1 + num2;
	*succees = 1;
	return (res);
}

int	minus(int num1, int num2, int *succees)
{
	int	res;

	res = num1 - num2;
	*succees = 1;
	return (res);
}

int	multiplication(int num1, int num2, int *succees)
{
	int	res;

	res = num1 * num2;
	*succees = 1;
	return (res);
}

int	devision(int num1, int num2, int *succees)
{
	int	res;

	if (num2 == 0)
	{
		write(2, "Stop : division by zero\n", 24);
		*succees = 0;
		return (0);
	}
	res = num1 / num2;
	*succees = 1;
	return (res);
}

int	modulo(int num1, int num2, int *succees)
{
	int	res;

	if (num2 == 0)
	{
		write(2, "Stop : modulo by zero\n", 22);
		*succees = 0;
		return (0);
	}
	res = num1 % num2;
	*succees = 1;
	return (res);
}
