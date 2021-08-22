/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:25:38 by slight            #+#    #+#             */
/*   Updated: 2021/08/14 21:27:40 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	int		temp;
	char	c;

	c = 48;
	if (nbr == 0)
		return ;
	temp = nbr % 10;
	ft_putnbr(nbr / 10);
	c = temp + 48;
	write(1, &c, 1);
}

void	print_empty(void)
{
	write (1, "\n", 1);
	write (1, "0\n", 2);
	write (1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		if (par[i].str[0] == '\0')
		{
			print_empty();
			continue ;
		}
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		++i;
	}
}
