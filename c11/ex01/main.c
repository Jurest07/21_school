#include <errno.h>
#include <stdio.h>
#include <stdlib.h>



// functions
int	*ft_map(int *arr, int n, int (*f)(int));

int square(int a)
{
	return a * a;
}



// main
int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9, 0, 2, 4, 6, 8 };
	int const n = sizeof(arr) / sizeof(int);

	int *res = ft_map(arr, n, &square);
	for (int i = 0; i < n; ++i)
		printf("%i ", res[i]);
	printf("\n");
	return (errno != 0);
}





// end
