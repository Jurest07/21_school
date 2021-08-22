/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:39:10 by slight            #+#    #+#             */
/*   Updated: 2021/08/07 20:39:18 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*buff;

	buff = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*(str) += 32;
		str++;
	}
	return (buff);
}
