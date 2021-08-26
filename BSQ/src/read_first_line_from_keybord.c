/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_first_line_from_keybord.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:40:06 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:53:18 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	read_half(t_read *r, t_chars *ch, char ****mas, int *t)
{
	if (++(*t) == 1)
	{
		ch->lenght = jrs_strlen(r->str);
		pars(r->str, ch->lenght, &mas, ch->line_count);
		r->err = errors(r->str, ch);
	}
	if (*t > 1)
	{
		r->err = errors(r->str, ch);
		pars(r->str, ch->lenght, &mas, ch->line_count);
	}
	if (r->err == 0)
		return (0);
	return (1);
}

char	*read_2(int *c, char *str, int fd, int *err)
{
	int		n;
	char	k;
	int		h;

	n = 7;
	k = 'a';
	h = 0;
	str = malloc(sizeof(*str) * (n + 1));
	while (k != '\n')
	{
		h = read(fd, &k, 1);
		str[*c] = k;
		++(*c);
		if (h == 0)
		{
			*err = 2;
			break ;
		}
		if (*c == n)
			str = jrs_realloc(str, &n, n * 2);
	}
	return (str);
}

t_chars	*check_first_line(char *str, int *err)
{
	t_chars	*fst_line;
	int		l;
	int		i;

	fst_line = malloc(sizeof(*fst_line));
	l = jrs_strlen(str);
	fst_line->full = str[l - 1];
	fst_line->trap = str[l - 2];
	fst_line->empty = str[l - 3];
	*err = fst_line_err(fst_line);
	str[l - 3] = '\0';
	i = 0;
	while (i < l - 3)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			*err = 0;
			return (fst_line);
		}
		++i;
	}
	fst_line->wight = jrs_atoi(str);
	if (fst_line->wight == 0)
		*err = 0;
	return (fst_line);
}

int	read_fst_line(int fd, t_chars **ch)
{
	char	*str;
	int		i;
	int		err;

	i = 0;
	err = 1;
	str = NULL;
	str = read_2(&i, str, fd, &err);
	str[--i] = '\0';
	*ch = check_first_line(str, &err);
	free(str);
	if (err == 0)
		return (1);
	return (0);
}

int	read_from_keybord(int fd, t_chars *ch, char ***mas)
{
	t_read	r;

	ch->line_count = 0;
	r.err = 1;
	while (1)
	{
		r.c = 0;
		r.str = read_2(&r.c, r.str, fd, &r.err);
		r.str[--(r.c)] = '\0';
		if (r.err == 2)
		{
			free(r.str);
			break ;
		}
		r.err = read_half(&r, ch, &mas, &(ch->line_count));
		free(r.str);
		if (r.err == 0)
			return (1);
	}
	if (ch->line_count != ch->wight)
		return (1);
	return (0);
}
