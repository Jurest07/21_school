#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// functions
int	ft_is_sort(int *arr, int n, int (*cmp)(int, int));

int intcmp(int lhs, int rhs)
{
	return lhs < rhs ? -1 : lhs > rhs ? 1 : 0;
}



// main
int main(void)
{
	int ints[] = {
		1,  2, 3, 4, 4,  4,  4,  5,
		1,  3, 6, 8, 10, 12, 13, 13,
		-4, 6, 6, 6, 6,  6,  6,  -1,
		0,  0, 0, 0, 0,  0,  1,  0,
		9,  8, 7, 5, 5,  5,  1,  0,
		0,  0, 0, 0, 0,  0,  0,  0,
	};

	int const arrn = 6;
	int const n = sizeof(ints) / sizeof(int) / arrn;

	for (int i = 0; i < arrn; ++i)
		printf("%i: %i\n", i, ft_is_sort(ints+i*n, n, intcmp));

	return 0;
}





// end
