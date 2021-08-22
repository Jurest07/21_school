/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:03:05 by slight            #+#    #+#             */
/*   Updated: 2021/08/05 22:57:21 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	vivod_chisla(char a1, char b2, char c3)
{
	ft_putchar(a1);
	ft_putchar(b2);
	ft_putchar(c3);
	if (! (a1 == 55 && b2 == 56 && c3 == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				vivod_chisla(a, b, c);
				c = c + 1;
			}
			b = b + 1;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}
