/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:58:34 by slight            #+#    #+#             */
/*   Updated: 2021/08/11 20:26:00 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	pow;

	i = 2;
	pow = 4;
	if (nb < 2)
		return (0);
	while (pow <= nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
		pow = i * i;
		if (pow < 0)
			break ;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!(ft_is_prime(nb)))
	{
		++nb;
	}
	return (nb);
}
