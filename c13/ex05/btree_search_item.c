/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 23:02:49 by slight            #+#    #+#             */
/*   Updated: 2021/08/20 23:03:34 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(
		t_btree *root,
		void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*res;

	if (!root)
		return (NULL);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res != NULL)
		return (res);
	if ((*cmpf)(root->item, data_ref) == 0)
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}
