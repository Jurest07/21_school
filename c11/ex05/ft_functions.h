/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:16:41 by slight            #+#    #+#             */
/*   Updated: 2021/08/18 16:28:53 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include <unistd.h>

char	*check_space(char *str);
char	*check_minus(char *str, int *minus);
int		check_numbers(char *str, int minus);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);

#endif
