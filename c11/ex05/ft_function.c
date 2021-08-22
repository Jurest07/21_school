/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:06:51 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 16:33:46 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
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
	while (dell > 0)
	{
		c = -(nb / dell) + 48;
		ft_putchar(c);
		nb = nb % dell;
		dell = dell / 10;
	}
	write(1, "\n", 1);
}
