/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 00:41:55 by lis              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*fun)(void *))
{
	if (!root)
		return ;
	fun(root->item);
	btree_apply_prefix(root->left, fun);
	btree_apply_prefix(root->right, fun);
}
