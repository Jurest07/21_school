/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:49:06 by slight            #+#    #+#             */
/*   Updated: 2021/08/11 19:57:57 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int pow;

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
