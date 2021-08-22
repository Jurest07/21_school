#include <stdio.h>

int	ft_find_next_prime(int n);

int main()
{
	int const nums[] = {
		-5, -7, -1893333,
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		86, 784, 324, 8549, 732849, 85943,
		1073741824, 1073741827,
		2147483641, 2147483647
	};

	int const answers[] = {
		2, 2, 2,
		2, 2, 2, 3, 5, 5, 7, 7, 11, 11, 11,
		89, 787, 331, 8563, 732863, 85991, 
		1073741827, 1073741827, 
		2147483647, 2147483647
	};

	int const n = sizeof(nums) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		printf( "%10i -> %10i (%10i; %i)\n",
			nums[i], ft_find_next_prime(nums[i]),
			answers[i], answers[i] == ft_find_next_prime(nums[i]) );
	}

	return 0;
}
