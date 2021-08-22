#include <stdio.h>

int	ft_iterative_power(int n, int a);

int main()
{
	int input[] = {
		-1,  -5,
		1,  -5,
		1,  5,
		0,  0,
		-1,  2,
		-1,  -4,
		0,  10,
		2,  -3,
		45,  0,
		9,  3,
		5,  4,
		13, 2,
		65, 3,
		3,  5
	};

	int const n = sizeof(input) / sizeof(int);
	for (int i = 0; i < n; i += 2)
	{
		printf( "%2i ^ %i = %i\n",
			input[i], input[i+1],
			ft_iterative_power(input[i], input[i+1]) );
	}

	return 0;
}
