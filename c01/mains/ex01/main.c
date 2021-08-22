#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int n;
	void *ps[9];
	ps[0] = &n;
	for (int i = 1; i < 9; ++i)
		ps[i] = &ps[i-1];
	ft_ultimate_ft(ps[8]);
	printf("%i\n", n);
}
