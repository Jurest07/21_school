/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:20:06 by slight            #+#    #+#             */
/*   Updated: 2021/08/06 21:52:27 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	power(int n, int s)
{
	while (s > 1)
	{
		n = n * 10;
		s--;
	}
	if (s == 0)
		return (1);
	return (n);
}

void	ft_putnbr(int nb)
{
	int	dell;
	int	coll;
	int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	coll = 0;
	n = nb;
	while (n >= 10)
	{
		n = n / 10;
		coll++;
	}
	dell = power(10, coll);
	while (dell >= 1)
	{
		ft_putchar(nb / dell + '0');
		nb = nb % dell;
		dell = dell / 10;
	}
}
