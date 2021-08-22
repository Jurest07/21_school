#include <stdio.h>

int	ft_recursive_power(int n, int a);

int main()
{
	int input[] = {
		4,  -5,
		5,  0,
		0,  0,
		2,  4,
		5,  2,
		3,  2,
		3,  3,
		5,  3,
		6,  2,
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
			ft_recursive_power(input[i], input[i+1]) );
	}

	return 0;
}
