/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:19:23 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 19:33:47 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	print_chars2(char *str, int col, int argc, int i);

int	check_numbers_in_string(char *str)
{
	int	f;
	int	s;
	int	len;

	len = ft_strlen(str);
	f = 0;
	s = 0;
	while (*str >= 48 && *str <= 57)
	{
		s = s * 10 + (*str - 48);
		++f;
		++str;
	}
	if (f != len)
		return (0);
	return (s);
}

int	take_count(char *str, int f)
{
	int	s;

	s = 0;
	if (f == 2)
		str = str + 2;
	while (*str)
	{
		s = s * 10 + (*str - 48);
		++str;
	}
	return (s);
}

char	*recursive(char **str, int fd, int n)
{
	int	c;

	*str = malloc(sizeof(char) * n);
	c = read(fd, *str, n);
	if (c == n)
	{
		free(*str);
		recursive(str, fd, n * 2);
		return (*str);
	}
	return (*str);
}

int	print_file(char *filename, int col, int argc, int i)
{
	char	*buff;
	int		fd;
	int		len_str;

	len_str = ft_strlen(filename);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
	{	
		write (2, "ft_tail: ", 9);
		write (2, filename, len_str);
		write (2, ": No such file or directory\n", 28);
		close (fd);
		return (0);
	}
	recursive (&buff, fd, 64);
	print_chars2 (buff, col, argc, i);
	close(fd);
	return (0);
}
