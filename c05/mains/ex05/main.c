#include <stdio.h>

int	ft_sqrt(int n);

int main()
{
	int const nums[] = {
		-5,  0,   1,    4,
		9,   25,  36,   86,
		743, 144, 1001, 81,

		8464, 6084, 2116, 9216,
		4225, 1089, 256,  2116,
		6241, 441,  1073741824,
		2147483647
	};

	int const answers[] = {
		0,  0,  1,  2,
		3,  5,  6,  0,
		0,  12, 0,  9,

		92, 78, 46, 96,
		65, 33, 16, 46,
		79, 21, 32768,
		0
	};

	int const n = sizeof(answers) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		printf( "%4i -> %2i (%2i; %i)\n",
			nums[i], ft_sqrt(nums[i]),
			answers[i], answers[i] == ft_sqrt(nums[i]) );
	}

	return 0;
}
