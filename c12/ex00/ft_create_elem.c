/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:44:05 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:58:04 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	element = (t_list *) malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element -> data = data;
	element -> next = NULL;
	return (element);
}
