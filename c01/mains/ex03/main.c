#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int nums[8] = {
		6, 5,
		48, 7,
		21, 7,
		86, 9
	};

	int div, mod;
	for (int i = 0; i < 8; i += 2)
	{
		ft_div_mod(nums[i], nums[i+1], &div, &mod);
		printf("%i, %i : %i, %i\n", nums[i], nums[i+1], div, mod);
	}
}
