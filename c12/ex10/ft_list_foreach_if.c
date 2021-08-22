/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:01:54 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:12:52 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(
		t_list *list,
		void (*f)(void *),
		void *data_ref,
		int (*cmp)())
{
	while (list)
	{
		if ((*cmp)(list -> data, data_ref) == 0)
			(*f)(list -> data);
		list = list -> next;
	}
}
