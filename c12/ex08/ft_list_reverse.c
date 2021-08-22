/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:01:38 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:09:28 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*buff;
	t_list	*prev;
	t_list	*next;

	if (*begin_list == 0)
		return (0);
	buff = *begin_list;
	prev = 0;
	while (buff)
	{
		next = buff->next;
		buff->next = prev;
		prev = buff;
		buff = next;
	}
	*begin_list = prev;
}
