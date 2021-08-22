/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:40:16 by slight            #+#    #+#             */
/*   Updated: 2021/08/13 22:56:53 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}

void	ft_strlens(char *str, char *sep, int *len, int *size)
{
	while (*str != '\0')
	{
		++str;
		++(*len);
	}
	if (*size > 1)
	{
		while (*sep != '\0')
		{
			++sep;
			++(*len);
		}
	}
}

char	*ft_strcut(char *str, char *src, int len_src)
{
	while (len_src > 0)
	{
		*str = *src;
		++str;
		++src;
		--len_src;
	}
	return (str);
}

char	*fun(int nstr, char **strs, char *sep, char *fstr)
{
	int	len;

	if (nstr == 0)
	{
		len = ft_strlen(strs[nstr]);
		fstr = ft_strcut(fstr, strs[nstr], len);
	}
	else
	{
		len = ft_strlen(sep);
		fstr = ft_strcut(fstr, sep, len);
		len = ft_strlen(strs[nstr]);
		fstr = ft_strcut(fstr, strs[nstr], len);
	}
	return (fstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*fstr;
	int		nstr;
	char	*res;
	int		i;

	len = 0;
	nstr = 0;
	i = size;
	while (size > 0)
	{
		ft_strlens(strs[size - 1], sep, &len, &size);
		--size;
	}
	size = i;
	fstr = (char *) malloc (sizeof(char) * (len + 1));
	res = fstr;
	while (nstr < size)
	{
		res = fun(nstr, strs, sep, res);
		++nstr;
	}
	*res = '\0';
	return (fstr);
}
