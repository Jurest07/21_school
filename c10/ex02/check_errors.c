/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:18:34 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 23:38:46 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	print_from_keybord(int col);
int	str_to_int(char *str);

int	error_arg(int arg)
{
	int	i;

	i = 1;
	if (arg == 1)
	{
		write(2, "./ft_tail: Expected -c flag.\n", 29);
		return (1);
	}
	return (0);
}

int	error_dir_minus(char *argv)
{
	if (ft_strlen(argv) == 1)
	{
		write (2, "ft_tail: -: No such file or directory\n", 38);
		return (1);
	}
	return (0);
}

int	error_flag(int argc, char *argv)
{
	if (argv[1] != 'c')
	{
		write(2, "./ft_tail: Expected -c flag.\n", 29);
		return (1);
	}
	if (argv[1] == 'c' && ft_strlen(argv) == 2 && argc == 2)
	{
		write (2, "ft_tail: option requires an argument -- ", 40);
		write (2, &argv[1], 1);
		write (2, "\nusage: ft_tail [-F | -f | -r] [-q] ", 35);
		write (2, "[-b # | -c # | -n #] [file ...]\n", 32);
		return (1);
	}
	return (0);
}

int	error_minus(int argc, char *argv)
{	
	int	len;

	len = 0;
	while (argv[len] != '\0')
		len++;
	if (argv[0] != '-')
	{
		write (2, "./ft_tail: Expected -c flag.\n", 29);
		return (1);
	}
	if (error_dir_minus(argv))
		return (1);
	if (argv[1] != 'c' && argv[1] != 'f' && argv[1] != 'F'
		&& argv[1] != 'q' && argv[1] != 'n' && argv[1] != 'r'
		&& argv[1] != 'b')
	{
		write (2, "ft_tail: illegal option -- ", 27);
		write (2, &argv[1], 1);
		write (2, "\nusage: ft_tail [-F | -f | -r] [-q] ", 35);
		write (2, "[-b # | -c # | -n #] [file ...]\n", 32);
		return (1);
	}
	if (error_flag (argc, argv))
		return (1);
	return (0);
}

int	check_numbers(char *arg)
{
	int	len;
	int	f;

	len = 2;
	f = 0;
	while (arg[len] != '\0')
	{
		if (arg[len] < 48 || arg[len] > 57)
			f = 1;
		++len;
	}
	if (f == 1)
	{
		arg = arg + 2;
		write(2, "ft_tail: illegal offset -- ", 27);
		write(2, arg, len - 2);
		write(2, "\n", 1);
		return (1);
	}
	f = str_to_int(arg + 2);
	print_from_keybord(f);
	return (0);
}
