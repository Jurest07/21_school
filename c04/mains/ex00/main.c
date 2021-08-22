#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int main()

{
	char *strings[] = {
		"hello, world!",
		"what are you doing?",
		"It's great!",
		"",
	};

	int const n = sizeof(strings) / sizeof(char *);

	for (int i = 0; i < n; ++i)
	{
		printf( "(%i-%i): %s\n",
			ft_strlen(strings[i]),
			(int)strlen(strings[i]),
			strings[i] );
	}
}

