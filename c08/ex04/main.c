#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char	*arr[3] = {"qrwtes", "hgjtnf", "hello"};
	int			num = 3;
	t_stock_str *fstr;

	fstr = ft_strs_to_tab(num, arr);
	ft_show_tab(fstr);
}
