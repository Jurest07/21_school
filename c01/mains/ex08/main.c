#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int arr[10] = {
		3, 7, 3, 5, 7, 1, 0, 3, 965, -43
	};

	ft_sort_int_tab(arr, 10);

	for (int i = 0; i < 10; ++i)
		printf("%i ", arr[i]);
	printf("\n");

	return 0;
}
