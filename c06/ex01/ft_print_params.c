#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	while (*str)
	{
		c = *str;
		write (1, &c, 1);
		++str;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
}
