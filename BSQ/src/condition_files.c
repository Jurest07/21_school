/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:06:36 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:47:47 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <head.h>
#include <jrs_header.h>

int	isk_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\n')
		++len;
	return (len);
}

char	*ft_realloc(int c, int *n, char *str)
{
	char	*temp;
	int		i;

	*n = c * 2;
	i = 0;
	temp = (char *)malloc(sizeof(char) * (*n + 1));
	while (i < c)
	{
		temp[i] = str[i];
		++i;
	}
	free(str);
	str = temp;
	return (temp);
}

char	*read_2_files(int fd)
{
	int		n;
	int		h;
	int		len;
	char	*str;

	n = 8;
	len = 0;
	str = malloc(sizeof(*str) * (n + 1));
	while (1)
	{
		h = read(fd, str + len, n - len);
		if (h == 0)
			break ;
		if (h == n - len)
			str = ft_realloc(n, &n, str);
		len += h;
	}
	str[len + 1] = '\0';
	return (str);
}

int	read_files(int fd, t_chars *ch, char **str)
{
	*str = read_2_files(fd);
	ch->lenght = isk_strlen(*str);
	if (ch->lenght == 0)
		return (1);
	if (check_back_slash_n(*str, ch) || errors_files(*str, ch))
		return (1);
	return (0);
}
