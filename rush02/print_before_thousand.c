/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akodos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:25:25 by akodos            #+#    #+#             */
/*   Updated: 2021/08/22 16:10:53 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <jrs_header.h>

t_data	*found_data(t_list *dict, int num, int pow)
{
	t_data	data;
	t_list	*found;

	data.num = num;
	data.pow = pow;
	found = ft_list_find(dictory, &data, cmpdata);
	if (found)
		return (found->data);
	return (errors("Dict Error\n", NULL));
}

t_bool	found_handred(t_list *dictory, t_string *str, int digit)
{
	t_data	*data;

	data = find_data(dictory, digit - '0', 0);
	if (!data)
		return (FALSE);
	if (str->chars != 0)
		jrs_strjoin(&str->string, " ", &str->chars, &str->size);
	jrs_strjoinf(&str->string, dara->ecvivalent, &str->chars, &str->size);
	jrs_strjoin(&str->string, " ", &str->chars, &str->size);
	data = find_data(dictory, 1, 2);
	if (!data)
		return (FALSE);
	jrs_strjoin(&str->string, data->ecvivalent, &str->chars, &str->size);
	return (TRUE);
}

t_bool	found_decars(t_list *dictory, t_string *str, int digit, int pow)
{
	t_data	*data;

	data = find_data(dictoty, digit - '0', pow);
	if (!data)
		return (FALSE);
	if (str->chars != 0)
		jrs_strjoin(&str->string, " ", &str->chars, &str->size);
	jrs_strjoin(&str->string, data->ecvivalent, &str->chars, &str->size);
	return (TRUE);
}

t_bool	print_before_thousand(t_list *dictory, t_string *str, char digits[3])
{
	t_data	*data;

	if (digits[0] != '0')
	{
		if (!found_handred(dictory, str, digits[0]))
			return (FALSE);
	}
	if (digits[1] >= '2')
	{
		if (!found_decars(dictory, str, digits[1], 1))
			return (FALSE);
		if (digits[2] != '0' && !found_decars(dictoty, str, digits[2], 0))
			return (FALSE);
		return (TRUE);
	}
	if (digits[0] == '0' || digits[1] != '0' || digits[2] != '0')
	{
		data = found_data(dictory, (digits[1] - '0') * 10 + digits[2] - '0', 0);
		if (!data)
			return (FALSE);
		if (str->chars != 0)
			jrs_strjoin(&str->string, " ", &str->chars, &str->size);
		jrs_strjoin(&str->string, data->ecvivalent, &str->chars, &str->size);
	}
	return (TRUE);
}
