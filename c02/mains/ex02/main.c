#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char *s1 = "Hello, world!";
	char *s2 = "hello";
	char *s3 = "What is your name?";
	char *s4 = "oshdljasndfjahsdfa";
	char *s5 = "";

	char *ps[] = {
		s1, s2, s3, s4, s5
	};

	for (char **p = ps; p < ps + 5; ++p)
		printf("%i : %s\n", ft_str_is_alpha(*p), *p);

	return 0;
}
