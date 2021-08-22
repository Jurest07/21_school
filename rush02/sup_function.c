/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sup_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:12:02 by slight            #+#    #+#             */
/*   Updated: 2021/08/22 14:13:13 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jrs_header.h"

char	*jrs_realloc_up(char **str, int n, int m)
{
	int		i;
	char	*temp;

	temp = malloc(sizeof(char) * m);
	i = 0;
	while (i < n)
	{
		temp[i] = (*str)[i];
		++i;
	}
	free(*str);
	*str = temp;
	return (*str);
}

void	*errors(char *err, void *data)
{
	write(2, err, jrs_strlen(err));
	if (data)
		free(data);
	return (NULL);
}

int	cmpdata(t_list *data, t_data *value)
{
	if (data->pow < value->pow)
		return (-1);
	if (data->pow > value->pow)
		return (1);
	if (data->num < value->num)
		return (-1);
	if (data->num > value->num)
		return (1);
	return (0);
}
