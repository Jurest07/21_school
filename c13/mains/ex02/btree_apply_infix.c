/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 00:46:05 by lis              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*fun)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, fun);
	fun(root->item);
	btree_apply_infix(root->right, fun);
}
