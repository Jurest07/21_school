/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:01:15 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:09:08 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (list)
	{
		temp = list;
		free_fct(list -> data);
		list = list -> next;
		free (temp);
	}
}
