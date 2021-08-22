#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_foreach(t_list *root, void (*f)(void *));
void	ft_list_foreach_if(
	t_list *root,
	void (*f)(void *),
	void *data_ref,
	int (*cmp)()
);

void print_i(void *data)
{
	printf("%i ", *(int *)data);
}

int	suitable_int(int *val)
{
	return !(*val > 43 && *val < 57);
}



// main
int	main(void)
{
	int a, b, c, d;
	a = 43; b = 45;
	c = 49; d = 57;
	
	t_list *list = NULL;
	ft_list_push_back(&list, &a);
	ft_list_push_back(&list, &b);
	ft_list_push_back(&list, &c);
	ft_list_push_back(&list, &d);

	ft_list_foreach(list, print_i);
	printf("\n");
	ft_list_foreach_if(list, print_i, NULL, suitable_int);

	return 0;
}



// end
