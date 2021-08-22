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
	if (argc > 0)
		ft_putstr(argv[0]);
	return (0);
}
