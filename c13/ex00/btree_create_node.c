/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:57:40 by slight            #+#    #+#             */
/*   Updated: 2021/08/20 23:29:08 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*element;

	element = malloc(sizeof(t_btree));
	if (element == NULL)
		return (NULL);
	element -> right = 0;
	element -> left = 0;
	element -> item = item;
	return (element);
}
