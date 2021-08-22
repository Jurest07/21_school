/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:10:50 by slight            #+#    #+#             */
/*   Updated: 2021/08/05 23:18:38 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	power(int n, int s)
{
	int	n1;

	n1 = n;
	while (s > 1)
	{
		n = n * n1;
		s--;
	}
	if (s == 0)
		return (1);
	return (n);
}

void	ft_putnbr(int n, int *arr, int arri, int ns)
{
	int	dell;

	dell = power(10, ns - 1);
	while (dell >= 1)
	{
		arr[arri++] = n / dell;
		n = n % dell;
		dell = dell / 10;
	}
}

int	print_arr(int *arr, int f, int n, int sw)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			f = 1;
		i++;
	}
	if (f == 1)
		return (0);
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
	while (i >= 1)
	{
		if (arr[i - 1] == sw--)
			k++;
		i--;
	}
	if (k == n)
		return (0);
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	arri;
	int	arr[10];

	j = 0;
	while (j < n)
		arr[j++] = 0;
	i = power(10, n);
	j = 0;
	arri = 0;
	while (j < i)
	{
		ft_putnbr(j, arr, arri, n);
		if (print_arr(arr, 0, n, 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		arri = 0;
		j++;
	}
}
