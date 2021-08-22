#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// functions
int	ft_any(char **strs, int (*f)(char *));

int contains_a(char *s)
{
	printf("> %s\n", s);
	while (*s)
	{
		if (*s == 'a')
			return 1;
		++s;
	}
	return 0;
}



// main
int main(void)
{
	char *strings[3][4] = {
		{ "one", "two", "three", NULL },
		{ "apple", "banana", "orange", NULL },
		{ "red", "green", "blue a!", NULL }
	};

	for (int i = 0; i < 3; ++i)
		printf("%i: %i\n", i, ft_any(strings[i], contains_a));

	return 0;
}





// end
