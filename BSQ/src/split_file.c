/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:53:58 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:53:59 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>
#include <head.h>
#include <stdlib.h>

char	*one_line(char **str, t_chars *ch)
{
	int		j;
	char	*one_str;

	j = 0;
	one_str = (char *)malloc(sizeof(char) * (ch->lenght + 1));
	while (**str != '\n')
	{
		one_str[j] = **str;
		(*str)++;
		++j;
	}
	(*str)++;
	one_str[j + 1] = '\0';
	return (one_str);
}

char	**split_file(char *str, t_chars *ch)
{
	char	**mas;
	int		i;

	i = 0;
	mas = (char **)malloc(sizeof(char *) * ch->wight);
	while (i < ch->wight)
	{
		mas[i] = one_line(&str, ch);
		++i;
	}
	return (mas);
}
