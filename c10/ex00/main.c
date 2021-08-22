/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:45:40 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 18:35:47 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	errors(int a)
{
	if (a < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (a > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

void	read_print(int fd)
{
	char	buff[1024];
	int		c;

	while (1)
	{
		c = read (fd, buff, 1024);
		if (c == 0)
			break ;
		write(1, buff, c);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (errors(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	read_print(fd);
	close(fd);
}
