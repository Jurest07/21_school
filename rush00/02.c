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
			if ((lenght == 1 && width == 1) || (width == 1 && lenght == y))
				ft_putchar('A');
			else if ((lenght == 1 && width == y) || (lenght == x && width == y))
				ft_putchar('C');
			else if ((lenght > 1 && lenght < x) && (width == 1 || width == y))
				ft_putchar('B');
			else if ((width > 1 && width < y) && (lenght == 1 || lenght == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			lenght++;
		}
		ft_putchar('\n');
		width++;
	}
}
