/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slight <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:16:25 by slight            #+#    #+#             */
/*   Updated: 2021/08/25 20:46:05 by slight           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

typedef struct s_chars
{
	int		wight;
	char	empty;
	char	trap;
	char	full;
	int		lenght;
	int		line_count;
}			t_chars;

typedef struct s_read
{
	int		c;
	char	*str;
	char	k;
	int		err;
	int		t;
	int		len_line;
	int		len;
}			t_read;

int			read_from_keybord(int fd, t_chars *ch, char ***mas);
int			read_fst_line(int fd, t_chars **ch);
char		*read_2(int *c, char *str, int fd, int *err);
t_chars		*check_first_line(char *str, int *err);
int			read_half(t_read *r, t_chars *ch, char ****mas, int *t);

void		print_error_not_exit(t_chars *ch,
				int		*matrix,
				char	**mas,
				char	*str);
void		print_error(t_chars *ch, int *matrix, char **mas);
int			errors(char *str, t_chars *ch);
int			fst_line_err(t_chars *fst);

void		pars(char *str, int lenght, char *****mas, int t);
int			read_files(int fd, t_chars *ch, char **str);
int			errors_files(char *str, t_chars *ch);
int			check_back_slash_n(char *str, t_chars *ch);

#endif
