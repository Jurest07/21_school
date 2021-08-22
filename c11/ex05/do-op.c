/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:13:14 by cjaye             #+#    #+#             */
/*   Updated: 2021/08/18 18:22:55 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"
#include "ft_opers.h"

int	 invalid_operateur(char *argv)
{
	return ((argv[0] != '+' && argv[0] != '-'
			&& argv[0] != '/' && argv[0] != '*'
			&& argv[0] != '%') || ft_strlen(argv) != 1);
}		

void	initialization_operations(int (*operation[128])(int, int, int *))
{
	operation['+'] = &plus;
	operation['-'] = &minus;
	operation['*'] = &multiplication;
	operation['/'] = &devision;
	operation['%'] = &modulo;
}

int	main(int argc, char **argv)
{
	int	succees;
	int	a;
	int	b;
	int	(*operation[128])(int, int, int *);

	if (argc != 4)
		return (1);
	if (invalid_operateur(argv[2]))
	{
		write (1, "0\n", 2);
		return (1);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	initialization_operations(operation);
	a = operation[(int)argv[2][0]](a, b, &succees);
	if (succees == 0)
		return (1);
	ft_putnbr(a);
	return (0);
}
