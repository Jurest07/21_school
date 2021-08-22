#include <stdio.h>

int	ft_fibonacci(int n);

int main()
{
	for (int i = -5; i < 41; ++i)
		printf("%2i: %i\n", i, ft_fibonacci(i)),
		fflush(stdout);

	return 0;
}
