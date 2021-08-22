/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/21 19:03:24 by akodos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_sorted_list_insert(t_list **list, void *data, int (*cmp)())
{
	t_list	*tmp;

	while (*list && (*cmp)(data, (*list)->data) >= 0)
		list = &(*list)->next;
	tmp = *list;
	*list = ft_create_elem(data);
	(*list)->next = tmp;
}
