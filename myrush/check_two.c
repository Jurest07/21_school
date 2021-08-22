int check_on_one(int *arr_of_nums)
{
	int	i;
	int *arr_str[4];
	int j;
	int k;

	j = 0;
	i = 0;
	while (i < 4)
	{	
		k = 0;
		while(k < 4)
		{
			arr_str[k] = arr_of_nums[j];
			++k;
			++j;
		}
		if (check_str_on_one(arr_str))
			return (1);
		++i;
	}
	return (0);
}

int check_str_on_one(int *arr_str)
{
	int i;
	int f

	f = 0;
	i = 0;
	while (i < 4)
	{
		if (att_str[i] == 1)
			++f;
		++i;
	}
	if (f != 1)
		return (1);
	return (0);
}
