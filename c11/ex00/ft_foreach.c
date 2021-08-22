/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:39:27 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 17:00:11 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int len, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < len)
	{
		f(tab[i]);
		++i;
	}	
}
