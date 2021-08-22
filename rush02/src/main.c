/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lis <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:10:04 by lis               #+#    #+#             */
/*   Updated: 2021/08/22 15:50:57 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <ft_list.h>
#include <global.h>
#include <stdio.h>

void fiction_free(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	t_list *dict;
	dict = parse_dict("numbers.dict");
	if (!dict)
	{
		printf("ERROR WITH PARSE DICT\n");
		return (0);
	}

	print_dict(dict);
	convert_and_write(dict, "0");
	convert_and_write(dict, "1");
	convert_and_write(dict, "10");
	convert_and_write(dict, "13");
	convert_and_write(dict, "15");
	convert_and_write(dict, "20");
	convert_and_write(dict, "45");
	convert_and_write(dict, "39");
	convert_and_write(dict, "100");
	convert_and_write(dict, "101");
	convert_and_write(dict, "111");
	convert_and_write(dict, "191");
	convert_and_write(dict, "110");
	convert_and_write(dict, "1000");
	convert_and_write(dict, "1435");
	convert_and_write(dict, "1900");
	convert_and_write(dict, "5784");
	convert_and_write(dict, "1000444");
	convert_and_write(dict, "1000001");
	convert_and_write(dict, "912634987162394876120483");
	ft_list_clear(dict, item_free);
	(void)argc;
	(void)argv;
	return (0);
}
