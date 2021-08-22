#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main()
{
	int f;
	char a[30] = "  --++--A1un6p5";
	char n[17] = "0123456789ABCDEF";
	f = ft_atoi_base(a, n);
	printf("\n\n%d\n", f);
}
