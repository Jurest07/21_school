/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:02:21 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:11:10 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **list1, t_list *list2)
{
	t_list	*buff;

	*list1 = buff;
	while (buff -> next)
		buff = buff -> next;
	buff -> next = list2;
}
