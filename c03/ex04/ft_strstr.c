/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:23:53 by slight            #+#    #+#             */
/*   Updated: 2021/08/10 14:23:54 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_check(char *str, char *find)
{
	while (*find)
	{
		if (*find != *str)
			break ;
		++find;
		++str;
	}
	if (*find == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (str_check(str, to_find))
			return (str);
		++str;
	}
	return (0);
}
