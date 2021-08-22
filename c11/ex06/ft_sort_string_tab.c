/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:34:40 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 18:23:11 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		++s1;
		++s2;
	}
}

void	sort(char **tab, int i, int j, int len)
{
	char	*temp;

	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			++j;
		}
		++i;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 1;
	len = 0;
	while (tab[len] != 0)
		++len;
	sort (tab, i, j, len);
}
