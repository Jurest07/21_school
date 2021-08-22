#include <stdio.h>

int	ft_recursive_power(int n, int a);

int main()
{
	int input[] = {
		-1,  -5,
		-1,  -4,
		1,  -5,
		1,  -4,
		0,  0,
		34,  0,
		3,  3,
		2,  -3,
		0,  24,
		6,  3,
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
