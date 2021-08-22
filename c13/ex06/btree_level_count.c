/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 23:21:19 by slight            #+#    #+#             */
/*   Updated: 2021/08/20 23:22:20 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int num1, int num2)
{
	if (num2 > num1)
		return (num2);
	return (num1);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 + max(btree_level_count(root->left),
			btree_level_count(root->right)));
}
