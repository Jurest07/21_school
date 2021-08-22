/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:34:22 by slight            #+#    #+#             */
/*   Updated: 2021/08/11 17:30:34 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(int nbr, int lenbase, char *basse)
{
	int	temp;

	if (nbr > 0)
		nbr = -nbr;
	if (nbr == 0)
		return ;
	temp = -(nbr) % lenbase;
	recursive(-(nbr) / lenbase, lenbase, basse);
	write (1, &basse[temp], 1);
}

int	check_base(char *base)
{
	char	*buff;
	int		i;

	i = 0;
	while (*base)
	{
		if (*base < 32 || *base > 126)
			return (0);
		buff = base + 1;
		if (*base == '+' && *base == '-')
			return (0);
		while (*buff)
		{
			if (*buff == *base)
				return (0);
			++buff;
		}
		++i;
		++base;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	char	*buff;

	buff = base;
	len_base = 0;
	if (check_base(base))
	{
		while (*buff)
		{
			++len_base;
			buff++;
		}
		if (nbr < 0)
			write(1, "-", 1);
		recursive(nbr, len_base, base);
	}
}
