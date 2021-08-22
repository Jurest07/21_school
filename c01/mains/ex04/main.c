#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int nums[8] = {
		6, 5,
		48, 7,
		21, 7,
		86, 9
	};

	for (int i = 0; i < 8; i += 2)
	{
		printf("%i, %i : ", nums[i], nums[i+1]);
		ft_ultimate_div_mod(nums + i, nums + i + 1);
		printf("%i, %i\n", nums[i], nums[i+1]);
	}
}
