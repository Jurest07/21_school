/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:23:03 by slight            #+#    #+#             */
/*   Updated: 2021/08/10 14:23:08 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buff;

	buff = dest;
	while (*dest)
		++dest;
	while (*src && nb--)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (buff);
}
