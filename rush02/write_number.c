/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:47:14 by slight            #+#    #+#             */
/*   Updated: 2021/08/22 16:16:25 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "jrs_header.h"

t_bool	found_razrad(t_list *dictory, t_string *str, int r)
{
	t_data	*data;

	data = found_data(dictory, 1, (r - 1) * 3);
	if (!data)
		return (FALSE);
	jrs_strjoin(&str->string, " ", &str->chars, &str->size);
	jrs_strjoin(&str->string, data->ecvivalent, &str->chars, &str->size);
	return (TRUE);
}

void	adt_digits(char digits[3], int len, char **num)
{
	if (len % 3 == 0)
	{
		digits[0] = *(*num)++;
		digits[1] = *(*num)++;
		digits[2] = *(*num)++;
	}
	else if (len % 3 == 1)
	{
		digits[0] = '0';
		digits[1] = '0';
		digits[2] = *(*num)++;
	}
	else
	{
		digits[0] = '0';
		digits[1] = *(*num)++;
		digits[2] = *(*num)++;
	}
}

void	next_razrad(char digits[3], int *ri, char **num)
{
	digits[0] = *(*num)++;
	digits[1] = *(*num)++;
	digits[2] = *(*num)++;
	--*ri;
}

void	*print_number(t_list *dictory, char *num)
{
	int			len;
	int			rr;
	char		digits[3];
	int			ri;
	t_string	str;

	len = jrs_strlen(num);
	adt_string(&str);
	adt_digits(digits, len, &num);
	rr = (len - 1) / 3 + 1;
	ri = rr;
	while (ri)
	{
		if ((rr == 1 || !(digits[0] == '0' && digits[1] == '0' && digits[2] == '0')) && (!print_before_thousand(dictory, &str, digits) || (ri > 1 && !found_razrad(dictoty, &str, ri))))
			return (errors("Dict Error\n", NULL));
		next_razrad(digits, &ri, &num);
	}
	print_char(&str.string, '\n', &str.chars, &str.size);
	write(1, str.string, str.chars);
	free(str.string);
	return (NULL);
}
