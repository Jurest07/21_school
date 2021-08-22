/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:24:48 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 23:36:49 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		error_minus(int argc, char *arg);
int		error_arg(int arg);
int		check_numbers(char *arg);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		check_numbers_in_string(char *str);
int		print_from_keybord(int col);
int		print_files(char *filemane, int col, int argc, int i);
int		print_file(char *filename, int col, int argc, int i);
void	print_name(char *filemane);
int		take_count(char *str, int f);

int	check_fail(int argc, char **argv)
{
	if (error_arg(argc))
		return (1);
	if (error_minus(argc, argv[1]))
		return (1);
	if (argc == 2)
		if (check_numbers(argv[1]))
			return (1);
	if (argc == 3 && ft_strcmp(argv[1], "-c") == 0)
	{
		if (check_numbers_in_string(argv[2]) == 0)
		{
			write (2, "ft_tail: illegal offset -- ", 27);
			write (2, argv[2], ft_strlen(argv[2]));
			write (2, "\n", 1);
			return (1);
		}
	}
	return (0);
}

int	print(int i, int argc, char **argv, int col)
{
	if (argc - 1 == i)
		print_file(argv[i], col, argc, i);
	else
	{
		while (i < argc)
		{
			print_files(argv[i], col, argc, i);
			++i;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	col;
	int	f;

	f = 0;
	if (check_fail(argc, argv))
		return (0);
	if (argc == 3 && ft_strcmp(argv[1], "-c") == 0)
		print_from_keybord(check_numbers_in_string(argv[2]));
	if (ft_strcmp(argv[1], "-c") != 0)
	{
		i = 2;
		col = take_count(argv[1], i);
	}
	else
	{
		i = 3;
		col = take_count(argv[2], i);
	}
	print(i, argc, argv, col);
}
