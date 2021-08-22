/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fun1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:19:35 by slight            #+#    #+#             */
/*   Updated: 2021/08/17 19:19:51 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

int	str_to_int(char *str)
{
	int	s;

	s = 0;
	while (*str != '\0')
	{
		s = (s * 10) + (*str - 48);
		++str;
	}
	return (s);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		++s1;
		++s2;
	}
}
