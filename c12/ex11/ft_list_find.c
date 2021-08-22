/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:02:03 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:02:04 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *list, void *data_ref, int (*cmp)())
{
	while (list)
	{
		if ((*cmp)(list -> data, data_ref) == 0)
			return (list);
		list = list -> next;
	}
	return (0);
}
