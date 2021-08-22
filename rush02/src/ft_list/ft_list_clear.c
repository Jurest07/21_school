/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/21 11:25:28 by lis              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <ft_list.h>

void	ft_list_clear(t_list *list, void (*free_fun)(void*))
{
	t_list	*tmp;

	while (list)
	{
		free_fun(list->data);
		tmp = list;
		list = list->next;
		free(tmp);
	}
}
