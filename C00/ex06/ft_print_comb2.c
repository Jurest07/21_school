/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:19:27 by slight            #+#    #+#             */
/*   Updated: 2021/08/05 18:18:36 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	vivod_numbers(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 0;
	while (number1 < 100)
	{
		number2 = number1 + 1;
		while (number2 < 100)
		{
			vivod_numbers(number1, number2);
			if (! (number1 == 98 && number2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number2++;
		}
		number1++;
	}
}
