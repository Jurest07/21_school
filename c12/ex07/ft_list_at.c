/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:01:23 by slight            #+#    #+#             */
/*   Updated: 2021/08/19 21:01:26 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *list, unsigned int nbr)
{
	while (nbr > 0)
	{
		if (list == 0)
			return (0);
		list = list -> next;
		--nbr;
	}
	return (list);
}
