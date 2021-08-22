#include <stdio.h>
#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max);


int main(void)
{
	int vals[] = {
		1,   10,
		0,   10,
		-5,  0,
		4,   2,
		3,   3,
		100, 120
	};

	int const n = sizeof(vals) / sizeof(int);
	int len;

	int arr[];
	for (int i = 0; i < n; i += 2)
	{
		len = ft_ultimate_range(&arr, vals[i], vals[i+1]);
		printf("(%3i - %3i): ", vals[i], vals[i+1]);

		if (arr)
		{
			for (int j = 0; j < len; ++j)
				printf("%3i ", arr[j]);
			printf("\n");
		}
		else
			printf("NULL\n");
		free(arr);
	}



	return 0;
}
