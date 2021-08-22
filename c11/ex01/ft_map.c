/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:38:47 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 18:23:40 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	i;
	int	*buff;

	buff = malloc(sizeof(int) * lenght);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		buff[i] = f (tab[i]);
		++i;
	}
	return (buff);
}
