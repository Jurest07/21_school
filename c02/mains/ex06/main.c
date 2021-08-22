#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main()
{
	char ch[2];
	for (int i = 0; i < 255; ++i)
	{
		ch[0] = i;
		ch[1] = 0;
		printf("%3i) %i %i\n", i, isgraph(i), ft_str_is_printable(ch));
	}

	return 0;
}
