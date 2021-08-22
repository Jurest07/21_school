#include <stdio.h>

int	ft_is_prime(int n);

int main()
{
	int const nums[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		86, 784, 324, 8549, 732849, 85943,
		1073741824, 1073741827,
		2147483641, 2147483647
	};

	int const answers[] = {
		0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 
		0, 1, 
		0, 1
	};

	int const n = sizeof(nums) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		printf( "%10i -> %i (%i; %i)\n",
			nums[i], ft_is_prime(nums[i]),
			answers[i], answers[i] == ft_is_prime(nums[i]) );
	}

	return 0;
}
