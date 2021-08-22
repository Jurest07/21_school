#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main()
{
	char *strings[] = {
		"---+++   --++84374",
		"---+++--++84374",
		"0",
		"10000",
		"05478tds843",
		"     --  2147483647",
		"     --2147483647",
		"----------++++++++++++-2147483648",
	};

	int numbers[] = {
		0,
		-84374,
		0,
		10000,
		5478,
		0,
		2147483647,
		-2147483648,
	};

	int const n = sizeof(numbers) / sizeof(int);

	int result;
	for (int i = 0; i < n; ++i)
	{
		result = ft_atoi(strings[i]);
		printf( "'%33s': (%i, %i) %i\n",
			strings[i], result,
			numbers[i], numbers[i] == result );
	}

	return 0;
}
