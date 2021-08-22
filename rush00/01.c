void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	lenght;
	int	width;

	width = 1;
	while (width <= y)
	{
		lenght = 1;
		while (lenght <= x)
		{
			if ((lenght == 1 && width == 1) || (lenght > 1 && width > 1
					 && width == y && lenght == x))
				ft_putchar('/');
			else if ((lenght == x && width == 1) || (lenght == 1 && width == y))
				ft_putchar(47);
			else if ((lenght > 1 && lenght < x) && (width == 1 || width == y))
				ft_putchar('*');
			else if ((width > 1 && width < y) && (lenght == 1 || lenght == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			lenght++;
		}
		ft_putchar('\n');
		width++;
	}
}
