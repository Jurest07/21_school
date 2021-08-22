/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:47:42 by slight            #+#    #+#             */
/*   Updated: 2021/08/07 20:37:14 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*buff;

	buff = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*(str) -= 32;
		str++;
	}
	return (buff);
}