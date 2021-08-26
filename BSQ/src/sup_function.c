/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sup_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:54:10 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:55:08 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	jrs_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*jrs_realloc(char *str, int *n, int m)
{
	char	*temp;
	int		i;
	int		min;

	i = 0;
	temp = (char *)malloc(sizeof(char) * (m + 1));
	if (*n < m)
		min = *n;
	else
		min = m;
	while (i < min)
	{
		temp[i] = str[i];
		++i;
	}
	free(str);
	str = temp;
	*n *= 2;
	return (str);
}

int	jrs_atoi(char *str)
{
	int	s;

	s = 0;
	while (*str)
	{
		s = s * 10 + (*str - '0');
		++str;
	}
	return (s);
}
