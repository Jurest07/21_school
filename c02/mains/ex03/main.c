#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char *s1 = "Hello, world!";
	char *s2 = "4783";
	char *s3 = "What is your name?";
	char *s4 = "oshdljasndfjahsdfa";
	char *s5 = "8434028328748";
	char *s6 = "";

	char *ps[] = {
		s1, s2, s3, s4, s5, s6
	};

	for (char **p = ps; p < ps + 6; ++p)
		printf("%i : %s\n", ft_str_is_numeric(*p), *p);

	return 0;
}
