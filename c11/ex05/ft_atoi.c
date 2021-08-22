/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:32:47 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 16:29:07 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_functions.h"

char	*check_space(char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == '\t')
	{
		str++;
	}
	return (str);
}

char	*check_minus(char *str, int *minus)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			++(*minus);
		++str;
	}
	return (str);
}

int	check_number(char *str, int minus)
{
	int	s;

	s = 0;
	while (*str >= 48 && *str <= 57)
	{
		s = (s * 10) + (*str - 48);
		++str;
		if (s == 214748364 && minus % 2 == 1 && *(str + 1) == '8')
			return (-2147483648);
	}
	return (s);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	res;

	minus = 0;
	str = check_space(str);
	str = check_minus(str, &minus);
	res = check_number(str, minus);
	if (res == -2147483648)
		return (res);
	if (minus % 2 == 1)
		res = -res;
	return (res);
}
