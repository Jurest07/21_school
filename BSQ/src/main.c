/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:13:21 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 21:22:30 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <head.h>
#include <jrs_header.h>

int	is_read_files_2(t_chars *ch, int *matrix, char **mas, t_square square)
{
	matrix = convert_maps(*ch, mas);
	square = max_square(matrix, ch->lenght, ch->wight);
	print_square(mas, square, *ch);
	freedom(mas, matrix, ch);
	return (0);
}

int	is_read_files(t_filed *filed)
{
	t_chars		*ch;
	char		**mas;
	t_square	square;
	int			*matrix;
	char		*str;

	adt_all_structs(&ch, &matrix, &mas, &square);
	str = NULL;
	if (read_fst_line(filed->fd, &ch))
	{
		print_error_not_exit(ch, matrix, mas, str);
		return (0);
	}
	if (read_files(filed->fd, ch, &str))
	{
		print_error_not_exit(ch, matrix, mas, str);
		return (0);
	}
	mas = split_file(str, ch);
	free(str);
	is_read_files_2(ch, matrix, mas, square);
	return (0);
}

int	is_read_from_keybord(t_chars *ch, char **mas, int *matrix, t_square square)
{
	if (read_fst_line(0, &ch))
		print_error(ch, matrix, mas);
	mas = (char **)malloc(sizeof(char *) * (ch->wight));
	if (read_from_keybord(0, ch, &mas))
		print_error(ch, matrix, mas);
	matrix = convert_maps(*ch, mas);
	square = max_square(matrix, ch->lenght, ch->wight);
	print_square(mas, square, *ch);
	freedom(mas, matrix, ch);
	return (0);
}

int	main(int argc, char **argv)
{
	t_filed		filed;
	t_chars		*ch;
	char		**mas;
	int			*matrix;
	t_square	square;

	adt_all_structs(&ch, &matrix, &mas, &square);
	filed.i = 1;
	if (argc == 1)
		is_read_from_keybord(ch, mas, matrix, square);
	else
	{
		while (filed.i < argc)
		{
			filed.fd = open(argv[filed.i], O_RDONLY);
			if (check_fd(&filed))
				continue ;
			is_read_files(&filed);
			close(filed.fd);
			++filed.i;
		}
	}
	return (0);
}
