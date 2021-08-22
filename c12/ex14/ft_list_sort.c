/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:02:30 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:14:31 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	len_list(t_list **list)
{
	int		len;
	t_list	*buff;

	buff = *list;
	len = 0;
	while (buff)
	{
		++len;
		buff = buff -> next;
	}
	return (len);
}

void	ft_list_sort(t_list **list, int (*cmp)())
{
	int		len;
	t_list	*temp;
	t_list	**p;
	t_list	**pp;

	len = len_list(list);
	while (len--)
	{
		p = list;
		pp = &(*p)-> next;
		while (*pp)
		{
			if ((*cmp)((*p)-> data, (*pp)-> data) > 0)
			{
				temp = *p;
				*p = *pp;
				*pp = (*p)-> next;
				(*p)-> next = temp;
			}
			p = &(*p)-> next;
			pp = &(*p)-> next;
		}	
	}
}
