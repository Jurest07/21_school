/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:36:20 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 13:14:45 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	advanced_sort(char **tab, int(*cmp)(char *, char *), int i, int j)
{
	int		len;
	char	*temp;

	len = 0;
	while (tab[len] != 0)
		++len;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (cmp(tab[i], tab[j]) > 0)
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

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	advanced_sort(tab, cmp, i, j);
}
