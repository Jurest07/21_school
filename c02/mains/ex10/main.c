#include <stdio.h>
#include <string.h>

unsigned int	*ft_strlcpy(char *dst, char *src, unsigned int n);

int main()
{
	char *s1 = "Hello, World!";
	char buf[64];
	char *ch = ft_strlcpy(buf, s1, 64);
	printf("(%i), %s\n", (int)strlen(s1), s1);
	printf("(%i), %s\n", (int)strlen(buf), buf);
	printf("%i\n", ch == buf);

	return 0;
}
