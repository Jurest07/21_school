#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_foreach(t_list *root, void (*f)(void *));
t_list *ft_list_find(t_list *root, void *data, int (*cmp)());

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
	a = 43;
	b = 45;
	c = 49;
	d = 57;
	
	t_list *list = NULL;
	ft_list_push_back(&list, &a);
	ft_list_push_back(&list, &b);
	ft_list_push_back(&list, &c);
	ft_list_push_back(&list, &d);

	ft_list_foreach(list, print_i);
	printf("\n");

	t_list *node = ft_list_find(list, NULL, suitable_int);
	printf("%p: %i\n", node, *(int *)node->data);
	printf("\n");

	return 0;
}



// end
