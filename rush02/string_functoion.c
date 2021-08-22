/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_functoion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:10:38 by slight            #+#    #+#             */
/*   Updated: 2021/08/22 14:11:47 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jrs_header.h"

int	jrs_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void	adt_string(t_string *str)
{
	str->chars = 0;
	str->size = 7;
	str->string = malloc(sizeof(char) * (str->size + 1));
}

char	**print_char(char **str, char ch, int *chars, int *size)
{
	if (*chars == *size)
	{
		jrs_realloc_up(str, *size, *size * 2 + 1);
		*size *= 2;
	}
	(*str)[*chars] = ch;
	++*chars;
	return (str);
}

char	**jrs_strjoin(char **dest, char *src, int *chars, int *size)
{
	while (*src)
		print_char(dest, *src++, chars, size);
	return (dest);
}
