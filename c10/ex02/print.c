/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:26:18 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 19:35:51 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*recursive(char **str, int fd, int i);

void	print_chars(int c, char *buff, int col)
{
	int	i;

	if (c - col < 0)
		i = c - col + 10000;
	else
		i = c - col;
	while (col > 0)
	{
		if (i == 10000)
			i = 0;
		write (1, &buff[i], 1);
		++i;
		--col;
	}
}

void	print_chars2(char *str, int col, int argc, int i)
{
	int	len;

	len = ft_strlen(str);
	str = str + len - col;
	write (1, str, col);
	if (argc - 1 != i)
		write (1, "\n", 1);
}

int	print_from_keybord(int col)
{
	char	buff[10000];
	int		c;
	int		summ;

	summ = 0;
	while (1)
	{
		c = read (0, buff, 10000);
		if (c == 0)
			break ;
		summ = summ + c;
	}
	c = summ % 10000;
	print_chars(c, buff, col);
	return (0);
}

void	print_name(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	write(1, "==> ", 4);
	write(1, filename, len);
	write(1, " <==\n", 5);
}

int	print_files(char *filename, int col, int argc, int i)
{
	char	*buff;
	int		fd;
	int		len_str;

	len_str = ft_strlen(filename);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
	{	
		write(2, "ft_tail: ", 9);
		write(2, filename, len_str);
		write(2, ": No such file or directory\n", 28);
		close(fd);
		return (0);
	}
	print_name(filename);
	recursive (&buff, fd, 64);
	print_chars2 (buff, col, argc, i);
	free (buff);
	close(fd);
	return (0);
}
