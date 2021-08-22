/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:24:25 by slight            #+#    #+#             */
/*   Updated: 2021/08/10 14:24:31 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	f;

	len_dest = str_len(dest);
	len_src = str_len(src);
	dest += len_dest;
	if (size < len_dest)
		f = size;
	else
		f = len_dest;
	while (*src && size > len_dest + 1)
	{
		*dest = *src;
		++dest;
		++src;
		size--;
	}
	*dest = '\0';
	return (f + len_src);
}
