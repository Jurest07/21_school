#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *sub);

int main()
{
	char *str = "abcdefgh";

	char *strings[] = {
		"abc",
		"fgh",
		"cde",
		"hab",
		"ghf",
		"cdeg",
	};

	int const n = sizeof(strings) / sizeof(char *);

	char *p1, *p2;
	printf("str: '%s'\n", str);
	for (int i = 0; i < n; ++i)
	{
		p1 = ft_strstr(str, strings[i]);
		p2 = strstr(str, strings[i]);

		printf("%i. (%s)\n", i, strings[i]);
		if (p1)
			printf("p1: %s\n", p1);
		else
			printf("p1 is NULL\n");

		if (p2)
			printf("p2: %s\n", p2);
		else
			printf("p2 is NULL\n");

		printf("p1 == p2: %i\n\n", p1 == p2);
	}
}
