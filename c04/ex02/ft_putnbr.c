/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:08:07 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 18:17:05 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		dell;
	char	c;

	if (nb < 0)
		ft_putchar('-');
	else
		nb = -nb;
	dell = 1;
	while (nb / dell < -9)
		dell = dell * 10;
	while (dell >= 1)
	{
		c = -(nb / dell) + 48;
		ft_putchar(c);
		nb = nb % dell;
		dell = dell / 10;
	}
}
