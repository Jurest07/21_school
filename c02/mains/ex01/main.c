#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dst, char *src, unsigned int n);

int main()
{
	char *s1 = "Hello, World!";
	char buf[64] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char *ch = ft_strncpy(buf, s1, 64);

	printf("(%i), %s\n", (int)strlen(s1), s1);
	printf("(%i), %s\n", (int)strlen(buf), buf);
	printf("%i\n", ch == buf);

	for (int i = 0; i < 64; i += 4)
	{
		printf("%i %i %i %i\n", buf[i], buf[i+1], buf[i+2], buf[i+3]);
	}

	return 0;
}
