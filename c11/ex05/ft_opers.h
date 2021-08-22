/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:38:30 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 16:38:32 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPERS_H
# define FT_OPERS_H

# include <unistd.h>

int	plus(int num1, int num2, int *succees);
int	minus(int num1, int num2, int *succees);
int	multiplication(int num1, int mun2, int *succees);
int	devision(int num1, int num2, int *succees);
int	modulo(int num1, int num2, int *succees);

#endif
