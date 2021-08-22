#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *lhs, char *rhs);

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

	for (int i = 1; i < n; ++i)
	{
		printf("(%s, %s): %i\n", strings[0], strings[i], ft_strcmp(strings[0], strings[i]));
		printf("(%s, %s): %i\n\n", strings[0], strings[i], strcmp(strings[0], strings[i]));
	}

	return 0;
}
