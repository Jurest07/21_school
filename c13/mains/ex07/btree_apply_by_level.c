/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/20 01:30:34 by lis              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stddef.h>

typedef struct s_appbl
{
	int	level;
	int	depth;
	int	*isfirst;
}	t_appbl;

void	_btree_apply_by_level(
	t_btree *root, t_appbl a,
	void (*fun)(void *, int, int)
)
{
	if (!root)
		return ;
	if (a.level == a.depth)
	{
		fun(root->item, a.level, *a.isfirst);
		*a.isfirst = 0;
		return ;
	}
	++a.level;
	_btree_apply_by_level(root->left, a, fun);
	_btree_apply_by_level(root->right, a, fun);
}

// fun: item, level, isfirst
void	btree_apply_by_level(t_btree *root, void (*fun)(void *, int, int))
{
	int		isfirst;
	t_appbl	a;

	a.depth = 0;
	a.level = 0;
	a.isfirst = &isfirst;
	while (1)
	{
		isfirst = 1;
		_btree_apply_by_level(root, a, fun);
		if (isfirst)
			break ;
		++a.depth;
	}
	return ;
}
