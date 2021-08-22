#include <unistd.h>

// functions

int		plus(int lhs, int rhs, int *suc);
int		minus(int lhs, int rhs, int *suc);
int		mult(int lhs, int rhs, int *suc);
int		divs(int lhs, int rhs, int *suc);
int		mod(int lhs, int rhs, int *suc);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *lhs, char *rhs);

void	init_operations(int (*operations[128])(int, int, int *))
{
	operations['+'] = &plus;
	operations['-'] = &minus;
	operations['*'] = &mult;
	operations['/'] = &divs;
	operations['%'] = &mod;
}

int	print_error(char op)
{
	if (op == '/')
		write(2, "Stop : division by zero\n", 24);
	else if (op == '%')
		write(2, "Stop : modulo by zero\n", 22);
	return (1);
}

// main
int	main(int argc, char *argv[])
{
	int	(*ops[128])(int, int, int *);
	int	res;
	int	suc;

	suc = 0;
	init_operations(ops);
	if (argc != 4)
		return (1);
	if (!ft_strcmp(argv[2], "+") || !ft_strcmp(argv[2], "-")
		|| !ft_strcmp(argv[2], "*") || !ft_strcmp(argv[2], "/")
		|| !ft_strcmp(argv[2], "%"))
	{
		res = ops[(int)argv[2][0]](ft_atoi(argv[1]), ft_atoi(argv[3]), &suc);
		if (!suc)
			return (print_error(argv[2][0]));
	}
	else
		res = 0;
	ft_putnbr(res);
	write(1, "\n", 1);
	return (suc != 1);
}

// end
