/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:57:36 by slight            #+#    #+#             */
/*   Updated: 2021/08/07 20:47:49 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*buff;

	buff = str;
	while (*str)
		if (*str >= 65 && *str <= 90)
			*(str++) += 32;
	else
		str++;
	return (buff);
}

char	*ft_strcapitalize(char *str)
{
	char	*buff;

	ft_strlowcase(str);
	if (*str >= 97 && *str <= 122)
		*str -= 32;
	buff = str++;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			if (*(str - 1) < 97 || *(str - 1) > 122 )
				if (*(str - 1) < 65 || *(str - 1) > 90)
					if (*(str - 1) < 48 || *(str - 1) > 58)
						*(str) -= 32;
		str++;
	}
	return (buff);
}
