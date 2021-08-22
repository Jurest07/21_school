#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a = 3, b = 5;
	printf("%i, %i\n", a, b);
	ft_swap(&a, &b);
	printf("%i, %i\n", a, b);
}
