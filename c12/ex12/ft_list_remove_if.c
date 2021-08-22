/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:02:11 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:13:37 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(
		t_list **list,
		void *data_ref,
		int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*dell;

	prev = NULL;
	while (*list != NULL)
	{
		if ((*cmp)(*list -> data, data_ref) == 0)
		{
			(*free_fct)((*list)-> data);
			dell = *list;
			*list = *list -> next;
			if (prev != NULL)
				prev -> next = (*list);
			free (dell);
		}
		else
		{
			prev = *list;
			*list = (*list)-> next;
		}
	}
}
