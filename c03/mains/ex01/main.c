#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *lhs, char *rhs, unsigned int n);

int main()
{
	char *strings[] = {
		"abcdef",
		"abcdee",
		"abcdeg",
		"abcdeff",
		"abcde",
		"abcdef",
	};

	int n = sizeof(strings) / sizeof(char *);

	for (int j = 5; j <= 7; ++j)
	{
		printf("n: %i\n", j);
		for (int i = 1; i < n; ++i)
		{
			printf("(%s, %s): %i\n", strings[0], strings[i], ft_strncmp(strings[0], strings[i], j));
			printf("(%s, %s): %i\n\n", strings[0], strings[i], strncmp(strings[0], strings[i], j));
		}
		printf("\n\n");
	}

	return 0;
}
