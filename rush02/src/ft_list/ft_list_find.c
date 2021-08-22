/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/21 20:51:20 by akodos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

t_list	*ft_list_find(t_list *root, void *data, int (*cmp)())
{
	while (root)
	{
		if ((*cmp)(root->data, data) == 0)
			return (root);
		root = root->next;
	}
	return (root);
}
