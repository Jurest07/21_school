void	fill_final_arr_inputs_nums(int ***farr, int *arri)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if(i < 4)
			(*farr)[0][i + 1] = arri[i++];
		else if (i >= 4 && i < 8)
			(*farr)[5][i - 3] = arri[i++];
		else if (i >= 8 && i < 12)
			(*farr)[i - 7][0] = arri[i++];
		else if (i >=12 && i < 16)
			(*farr)[i - 11][5] = arri[i++];
	}
	(*farr)[0][0] = 0;	
	(*farr)[5][5] = 0;
	(*farr)[0][5] = 0;
	(*farr)[5][0] = 0;
}

void	fill_finel_arr_first_params(int ***farr)
{
	int i;

	i = 0;
	while (i < 6)
		if ((*farr)[0][i] == 1)
			(*farr)[1][i] = 4;
	i = 0;
	while (i < 6)
		if ((*farr)[5][i] == 1)
			(*farr)[4][i] = 4;
	i = 0;
	while (i < 6)
		if ((*farr)[i][0] == 1)
			(*farr)[i][1] = 4;
	i = 0;
	while (i < 6)
		if ((*farr)[i][5] == 1)
			(*farr)[i][4] = 4;
}
