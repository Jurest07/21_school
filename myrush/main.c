int check_arguments(int mun_arg, char **val_arg);
int ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	int *arr_input_nums;
	int final_arr[6][6];

	arr_input_nums = check_arguments(int argc, char **argv);
	if(error_of_input_nums(arr_input_nums))
		return (0);
	fill_final_arr_inputs_nums(&final_arr, arr_inputs_nums);
	fill_final_arr_first_params(&final_arr);

}
