/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:14:17 by slight            #+#    #+#             */
/*   Updated: 2021/08/11 21:39:03 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == -1 && power % 2 == 0)
		return (1);
	if (nb == -1 && power % 2 == -1)
		return (-1);
	if (nb == 1)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
