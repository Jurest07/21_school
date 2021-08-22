/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 22:51:32 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_insert_data(
	t_btree **root,
	void *item,
	int (*cmp)(void *, void *)
)
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmp(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmp);
	else
		btree_insert_data(&(*root)->right, item, cmp);
	return ;
}
