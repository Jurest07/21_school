/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:47:16 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:12:09 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	node -> next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		++i;
	}
	return (list);
}
