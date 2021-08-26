/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jrs_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:18:59 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:02:59 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JRS_HEADER_H
# define JRS_HEADER_H

# include "head.h"

# define FALSE 0
# define TRUE 1

typedef int	t_bool;

typedef struct s_square
{
	int		value;
	int		x_coord;
	int		y_coord;
	int		i;
}	t_square;

typedef struct s_iters
{
	int		i;
	int		j;
	int		k;
	int		p;
}	t_iters;

typedef struct s_filed
{
	int	fd;
	int	i;
	int	err;
}	t_filed;

int			check_fd(t_filed *filed);
void		max_square_part_2(t_square *res,
				int						*matrix,
				int						*map,
				t_iters					iters);
int			min_value(int a, int b, int c);
t_square	max_square(int *matrix, int lenght, int wight);
void		add_value(t_square *res, int value, int x, int y);

void		adt_iters(t_iters *iters);
t_square	adt_t_square(void);
int			*adt_map(int lenght, int wight);
t_square	adt_t_square(void);
void		adt_all_structs(t_chars **ch,
				int					**matrix,
				char				***mas,
				t_square			*square);

void		print_square(char **str, t_square result, t_chars data);
int			*convert_maps(t_chars data, char **str);

void		freedom(char **mas, int *matrix, t_chars *ch);
void		freedom_without_matrix(char **mas, t_chars *ch);

int			jrs_strlen(char *str);
char		*jrs_realloc(char *str, int *n, int m);
int			jrs_atoi(char *str);

char		**split_file(char *str, t_chars *ch);
char		*one_line(char **str, t_chars *ch);

#endif
