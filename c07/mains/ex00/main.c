#include <stdio.h>
#include <stdlib.h>





// functions
char	*ft_strdup(char *src);





// main
int main(void)
{
	char *strings[] = {
		"One",
		"Two",
		"Three",
		"Hello, World!",
	};

	int const n = sizeof(strings) / sizeof(char *);

	char *newstr;
	for (int i = 0; i < n; ++i)
	{
		newstr = ft_strdup(strings[i]);
		printf("%s\n%s\n\n", newstr, strings[i]);
		free(newstr);
	}

	return 0;
}





// end
