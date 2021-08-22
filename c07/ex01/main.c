#include <stdio.h>
#include <stdlib.h>


int	*ft_range(int min, int max);


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

	int *arr;
	for (int i = 0; i < n; i += 2)
	{
		arr = ft_range(vals[i], vals[i+1]);
		printf("(%3i - %3i): ", vals[i], vals[i+1]);

		if (arr)
		{
			for (int j = 0; j < vals[i+1] - vals[i]; ++j)
				printf("%3i ", arr[j]);
			printf("\n");
		}
		else
			printf("NULL\n");
		free(arr);
	}



	return 0;
}
