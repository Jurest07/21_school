#include <stdio.h>
#include <string.h>

void	ft_print_memory(void *data, unsigned int size);

int main()
{
	char *s1 = "Hello,\nWorld!\0\0";
	char *s2 = "Bonjour les aminches...c est fou.tout.ce qu"
	           " on peut faize avec...print_memory....lol.lol. .";

	ft_print_memory(s1, strlen(s1)+1);
	printf("\n"); fflush(stdout);

	ft_print_memory(s2, strlen(s2));
	printf("\n"); fflush(stdout);

	return 0;
}
