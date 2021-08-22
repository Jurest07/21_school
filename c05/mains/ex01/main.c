#include <stdio.h>

int	ft_recursive_factorial(int n);

int main()
{
	for (int i = -5; i < 14; ++i)
		printf("%2i): %i\n", i, ft_recursive_factorial(i));

	return 0;
}
