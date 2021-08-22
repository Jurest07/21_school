/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:09:16 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 13:26:18 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*buff;

	buff = dest;
	while (*src && n--)
		*(dest++) = *(src++);
	while (n != 0 && n != (unsigned int) -1)
		*(dest++) = '\0';
	return (buff);
}
