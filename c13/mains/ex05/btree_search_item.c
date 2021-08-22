/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 01:05:06 by lis              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

void	*btree_search_item(
	t_btree *root, void *item,
	int (*cmp)(void *, void *)
)
{
	void	*res;

	if (!root)
		return (NULL);
	res = btree_search_item(root->left, item, cmp);
	if (res)
		return (res);
	if (cmp(root->item, item) == 0)
		return (root->item);
	return (btree_search_item(root->right, item, cmp));
}
