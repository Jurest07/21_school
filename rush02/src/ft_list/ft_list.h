/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:40:34 by akodos            #+#    #+#             */
/*   Updated: 2021/08/21 18:54:12 by akodos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list *list, void (*free_fun)(void *));
t_list	*ft_list_find(t_list *root, void *data, int (*cmp)());
int		ft_list_size(t_list *list);
void	ft_sorted_list_insert(t_list **list, void *data, int (*cmp)());
void	ft_list_push_back(t_list **root, void *data);

#endif
