/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:09:37 by slight            #+#    #+#             */
/*   Updated: 2021/08/10 14:20:44 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
		if ((*str < 65 || *str > 90) && (*str < 97 || *(str++) > 123))
			return (0);
	return (1);
}
