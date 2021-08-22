/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:36:06 by slight            #+#    #+#             */
/*   Updated: 2021/08/13 22:34:06 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*check_space(char *str, int *minus)
{
	while (*str == ' ' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == '\t')
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			++(*minus);
		++str;
	}
	return (str);
}	

int	check_number(char *str, char *base, int len_base, int f)
{
	int		s;
	char	*buff;
	int		i;

	s = 0;
	while (*str > 32 && *str < 127)
	{
		buff = base;
		i = 0;
		f = 0;
		while (*buff)
		{
			if (*str == *buff)
			{
				s = s * len_base - i;
				f = 1;
			}
			++i;
			++buff;
		}
		if (f == 0)
			break ;
		++str;
	}
	return (s);
}

int	check_base(char *base, int *len_base)
{
	int		i;
	char	*buff;

	i = 0;
	while (*base)
	{
		if (*base < 32 || *base > 126)
			return (0);
		if (*base == '+' || *base == '-' || *base == ' ' || *base == '\n'
			|| *base == '\v' || *base == '\t' || *base == '\r' || *base == '\f')
			return (0);
		buff = base + 1;
		while (*buff)
		{
			if (*buff == *base)
				return (0);
			++buff;
		}
		++base;
		++i;
	}
	if (i < 2)
		return (0);
	*len_base = i;
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	minus;
	int	res;
	int	len_base;

	if (!check_base(base, &len_base))
		return (0);
	minus = 0;
	str = check_space(str, &minus);
	res = check_number(str, base, len_base, 0);
	if (minus % 2 == 0 || minus == 0)
		res = -res;
	return (res);
}
