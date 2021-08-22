/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 23:01:55 by slight            #+#    #+#             */
/*   Updated: 2021/08/20 23:03:18 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_insert_data(
		t_btree **root,
		void *item,
		int (*cmpf)(void *, void *))
{	
	if (!*root)
	{
		(*root) = btree_create_node(item);
		return ;
	}		
	if ((*cmpf)((*root)->item, item) > 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
	return ;
}
