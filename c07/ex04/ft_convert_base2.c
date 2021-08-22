/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 22:36:17 by slight            #+#    #+#             */
/*   Updated: 2021/08/13 22:38:23 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base, int *len);
char	*check_spase(char *srt, int *minus);
int		check_number(char *str, char *base, int len_base, int f);
int		ft_atoi_base(char *str, char *base);

void	recursive(int nbr, int lenbase, char *basse, char **fstr)
{
	int	temp;

	if (nbr > 0)
		nbr = -nbr;
	if (nbr == 0)
		return ;
	temp = -(nbr) % lenbase;
	recursive(-(nbr) / lenbase, lenbase, basse, fstr);
	**fstr = basse[temp];
	++(*fstr);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}

int	malloc_range(int nbr, char *base, int *range)
{
	int	len;
	int	temp;

	len = ft_strlen(base);
	if (nbr > 0)
		nbr = -nbr;
	if (nbr == 0)
		return (*range);
	temp = -(nbr) % len;
	malloc_range(-(nbr) / len, base, range);
	++(*range);
	return (*range);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	char	*buff;
	char	*res;
	char	*fstr;
	int		i;

	i = 0;
	fstr = (char *) malloc(sizeof(char) * (malloc_range(nbr, base, &i) + 1));
	buff = base;
	res = fstr;
	len_base = 0;
	if (check_base(base, &i))
	{
		while (*buff)
		{
			++len_base;
			buff++;
		}
		if (nbr < 0)
			*(fstr++) = '-';
		recursive(nbr, len_base, base, &fstr);
	}
	*fstr = '\0';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*fstr;
	int		i;

	i = 0;
	if (ft_atoi_base(nbr, base_from) == 0)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	printf("%d\n", number);
	if (!check_base(base_to, &i))
		return (NULL);
	fstr = ft_putnbr_base(number, base_to);
	return (fstr);
}
