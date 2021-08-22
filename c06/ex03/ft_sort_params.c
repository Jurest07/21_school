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

int	ft_strcmp(char *s1, char *s2) // buff, a.
{
	while (1)
	{
		if (*s1 > *s2)
			return (0);
		if (*s1 < *s2)
			return (1);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		++s1;
		++s2;
	}
}

void	ft_sort(char **a, int size)
{
	char *temp;
	char **buff;
	char **e;

	e = a + size;
	while (a != e)
	{
		buff = a + 1;
		while (buff != e)
		{
			if(ft_strcmp(*buff, *a))
			{
				temp = *buff;
				*buff = *a;
				*a = temp;
			} 
			++buff;
		}
		++a;
	}	
}

int	main(int argc, char **argv)
{
	char **e;

	e = argv + argc;
	++(argv);
	ft_sort(argv, argc - 1);
	while (argv != e)
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
		++(argv);
	}
}
