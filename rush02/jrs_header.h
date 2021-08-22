/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jrs_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:09:56 by slight            #+#    #+#             */
/*   Updated: 2021/08/22 14:10:02 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JRS_HEADER_H
# define JRS_HEADER_H

# include <ft_list.h>

# define TRUE 1
# define FALSE 0

typedef int		t_bool;

typedef struct s_string
{
	char	*string;
	int		chars;
	int		size;
}	t_string;

int		jrs_strlen(char *str);
void	adt_string(t_string *str);
char	**print_char(char **str, char ch, int *chars, int *size);
char	**jrs_strjoin(char **dest, char *src, int *chars, int *size);

char	*jrs_realloc_up(char **str, int n, int m);
void	*errors(char *err, void *data);
int		cmpdata(t_item *lhs, t_item *rhs);

t_data	*found_data(t_list *dictory, int num, int pow);
t_bool	found_handred(t_list *dictory, t_string *str, int digit);
t_bool	found_decars(t_list *dictory, t_string *str, int digit, int pow);
t_bool	print_begore_thousand(t_list *dictory, t_string *str, char digits[3]);

t_bool	found_razrad(t_list *dictory, t_string *str, int r);
void	adt_digits(char digits[3], int len, char **num);
void	next_razrad(char digits[3], int *ri, char **num);
void	*print_number(t_list *dictory, char *num);

#endif
