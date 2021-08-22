#include <stdlib.h>
int ft_putstr(char *str);
int check_on_one(int *arr);

int one_in_num(char *str)
{
	int i;

	i = 0;
	while (*str != ' ')
		++i;
	if (i > 1)
		return (0);
	return (1);
}

int	error_of_input_nums(int *arr)
{
	if (arr == NULL)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

int	*split_spaces(char *str)
{
	int *arr_of_num;
	int j;

	j = 0;
	arr_of_num = malloc(sizeof(int) * 16);
	while (*str != '\0')
	{
		if (*str == ' ')
			++j;
		else if (one_in_num(str))
		{
			arr_of_num[j] = (*str) - 48;
			if (j == 15)
				break ;
		}
		if (!(one_in_num)
			return (NULL);
		++str;
	}
	if (j != 15)
		return (NULL);
	return (arr_of_num);
}

int	*check_arguments(int num_arg, char **val_arg)
{
	int *arr_input_num;
	int i;

	i = 0;
	if (num_arg != 2)
		return (NULL);
	arr_input_num = split_spaces(val_arg[1]);
	if (arr_input_num == NULL)
		return (NULL);
	while (i < 16)
	{
		if (arr_input_num[i] > 4 || arr_input_num[i] < 1)
			return (NULL);
		++i
	}
	if (check_on_one(arr_input_num))
		return (NULL);
	return (arr_input_num);
}
