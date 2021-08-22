#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int main()
{
	char *s1 = "Hello,\nWorld!\0\0";
	ft_putstr_non_printable(s1);
	printf("\n"); fflush(stdout);

	return 0;
}
