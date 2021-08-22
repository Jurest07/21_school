/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:44:41 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 18:22:30 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f) (char*))
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
			++s;
		++i;
	}
	return (s);
}
