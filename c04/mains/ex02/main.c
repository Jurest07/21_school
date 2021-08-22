#include <stdio.h>

void ft_putnbr(int nb);

int main()
{
	ft_putnbr(0);
	printf("\n"); fflush(stdout);

	ft_putnbr(-2147483648);
	printf("\n"); fflush(stdout);

	ft_putnbr(42);
	printf("\n"); fflush(stdout);

	ft_putnbr(-42);
	printf("\n"); fflush(stdout);

	ft_putnbr(892310284);
	printf("\n"); fflush(stdout);

	ft_putnbr(-892310284);
	printf("\n"); fflush(stdout);

	ft_putnbr(2147483647);
	printf("\n"); fflush(stdout);

	return 0;
}
