/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:07:40 by slight            #+#    #+#             */
/*   Updated: 2021/08/07 21:06:19 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	while (*src && n-- > 1)
		*(dest++) = *(src++);
	*dest = '\0';
	return (len);
}
