/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:52:47 by slight            #+#    #+#             */
/*   Updated: 2021/08/09 13:17:45 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_swap16(char c)
{
	char	arr[3];

	arr[0] = '\\';
	if (c / 16 < 10)
		arr[1] = c / 16 + '0';
	else
		arr[1] = c / 16 + 'a' - 10;
	if (c % 16 < 10)
		arr[2] = c % 16 + '0';
	else
		arr[2] = c % 16 + 'a' - 10;
	write(1, arr, 3);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;

	while (*str)
	{
		if (*str < 32 || *str > 126)
			ft_swap16(*str);
		else
		{
			c = *str;
			write(1, &c, 1);
		}
		++str;
	}
}
