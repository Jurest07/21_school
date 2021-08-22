#include <stdio.h>

void	ft_putnbr_base(int value, char *base);

int main()
{
	ft_putnbr_base(0, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(42, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(-42, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(892310284, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(-892310284, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(2147483647, "0123456789");
	printf("\n"); fflush(stdout);

	ft_putnbr_base(666, "01234567");
	printf("\n"); fflush(stdout);

	return 0;
}
