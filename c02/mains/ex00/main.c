#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dst, char *src);

int main()
{
	char *s1 = "Hello, World!";
	char buf[64];
	char *ch = ft_strcpy(buf, s1);
	printf("(%i), %s\n", (int)strlen(s1), s1);
	printf("(%i), %s\n", (int)strlen(buf), buf);
	printf("%i\n", ch == buf);

	return 0;
}
