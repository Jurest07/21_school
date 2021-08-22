#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	printf("%i\n", ft_strlen("Hello, World!\n"));
	printf("%i\n", ft_strlen("How do you do?\n"));
	printf("%i\n", ft_strlen(NULL));
	printf("%i\n", ft_strlen(""));

	return 0;
}
