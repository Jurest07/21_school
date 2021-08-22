/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:33:09 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 18:22:45 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_sort(int *tab, int len, int (*f)(int, int), int i)
{
	int	flag;
	int	s;

	s = 0;
	flag = 0;
	while (i < len)
	{
		if ((f(tab[i - 1], tab[i]) < 0) && (flag == 0 || flag == 1))
		{
			flag = 1;
			++s;
		}
		if ((f(tab[i - 1], tab[i]) > 0) && (flag == 0 || flag == 2))
		{
			flag = 2;
			++s;
		}
		if (f(tab[i - 1], tab[i]) == 0)
			++s;
		++i;
	}
	if (s == len - 1)
		return (1);
	return (0);
}

int	ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
	int	i;

	if (lenght == 1)
		return (1);
	i = 1;
	if (is_sort(tab, lenght, f, i))
		return (1);
	return (0);
}
