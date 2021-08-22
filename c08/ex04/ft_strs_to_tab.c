/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:12:38 by slight            #+#    #+#             */
/*   Updated: 2021/08/14 21:12:39 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*buff;
	char	*res;
	int		len_str;

	len_str = 0;
	buff = str;
	while (*(str++) != '\0')
		++len_str;
	res = malloc (sizeof(char) * (len_str + 1));
	if (res == 0)
		return (0);
	while (*buff != '\0')
	{
		*res = *buff;
		++res;
		++buff;
	}
	*res = '\0';
	res = res - len_str;
	return (res);
}

void	ft_str_full(t_stock_str *arr, char *s)
{
	arr->size = ft_strlen(s);
	arr->str = s;
	arr->copy = ft_strdup((*arr).str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = malloc (sizeof(*arr) *(ac + 1));
	while (i < ac)
	{
		ft_str_full(arr + i, av[i]);
		++i;
	}
	arr[ac].str = 0;
	return (arr);
}
