#include <unistd.h>
void	count_of_pos(char *queens, int *res, int n)
{
	int x;
	int y;
	if (n == 10)
	{
		++res;
		x = 0;
		while (x < 10)
			write(1, &queens[x++], 1);
		write(1, "\n", 1);
		return ;	
	}
	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < n)
		{
			if (x == queens[y] || (y - n) == (queens[y] - x))
				break ;
			++y;
		}
		if (n == y)
		{
			queens[n] = x + 48;
			count_of_pos (queens, res, n + 1);
		}
		++x;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char queens[11];
	int res;
	int i;

	i = 0;
	while (i < 11)
		queens[i++] = '\0';
	count_of_pos(queens, &res, 0);
	return (res);
}

int main()
{
	ft_ten_queens_puzzle();
}
