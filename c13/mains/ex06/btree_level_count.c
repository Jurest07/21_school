/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 23:18:49 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

int	maxi(int a, int b)
{
	if (b > a)
		return (b);
	return (a);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 + maxi(btree_level_count(root->left),btree_level_count(root->right)));
}
