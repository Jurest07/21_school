#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dst, char *src);

int main()
{
	char buf[512] = "";
	char buf2[512] = "";

	char *strings[] = {
		"abcdef ",
		"abcdee ",
		"abcdeg ",
		"abcdeff ",
		"abcde ",
		"abcdef ",
	};

	int const n = sizeof(strings) / sizeof(char *);

	printf("^) %s\n", buf);
	printf("^) %s\n\n", buf2);

	for (int i = 0; i < n; ++i)
	{
		ft_strcat(buf, strings[i]);
		strcat(buf2, strings[i]);

		printf("%i) %s\n", i, buf);
		printf("%i) %s\n%i\n\n", i, buf2, strcmp(buf, buf2));
	}

	return 0;
}
