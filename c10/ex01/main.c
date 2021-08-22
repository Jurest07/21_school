/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:53:12 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 19:36:46 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);

int	print_from_keybord(void)
{
	char	buff[1024];
	int		c;

	while (1)
	{
		c = read (0, buff, 1024);
		if (c == 0)
			break ;
		write (1, buff, c);
	}
	return (0);
}

int	print_files(char *filename)
{
	char	buff[1024];
	int		c;
	int		fd;
	int		len_str;

	len_str = ft_strlen(filename);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
	{	
		write(2, "ft_cat: ", 8);
		write(2, filename, len_str);
		write(2, ": No such file or directory\n", 28);
		return (0);
	}
	while (1)
	{
		c = read (fd, buff, 1024);
		if (c == 0)
			break ;
		write (1, buff, c);
	}	
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (print_from_keybord());
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			print_from_keybord();
		else if (ft_strcmp(argv[i], "--") == 0 && argc > 2 && i == 1)
			;
		else if (ft_strcmp(argv[i], "--") == 0 && argc == 2)
			print_from_keybord();
		else
			print_files(argv[i]);
		++i;
	}
	return (0);
}
