#include <stdio.h>

#include "ft_list.h"



// prototypes
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_foreach(t_list *root, void (*f)(void *));
void	ft_list_merge(t_list **first, t_list *second);
void	ft_list_sort(t_list **root, int (*cmp)());



// funs
void print_i(void *data)
{
	printf("%i ", *(int *)data);
}

int intcmp(int *lhs, int *rhs)
{
	return *lhs < *rhs ? -1 : *lhs > *rhs ? 1 : 0;
}



// main
int	main(void)
{
	int a, b, c, d, e, f, g, h;
	(void)a; (void)b; (void)c; (void)d;
	a = 43; b = 45;
	c = 49; d = 57;
	e = 32; f = 33;
	g = 31; h = 34;
	
	t_list *list = NULL;
	ft_list_push_back(&list, &a);
	ft_list_push_back(&list, &b);
	ft_list_push_back(&list, &c);
	ft_list_push_back(&list, &d);

	t_list *llist = NULL;
	ft_list_push_back(&list, &e);
	ft_list_push_back(&list, &f);
	ft_list_push_back(&list, &g);
	ft_list_push_back(&list, &h);

	ft_list_merge(&list, llist);
	ft_list_foreach(list, print_i);
	printf("\n");

	ft_list_sort(&list, intcmp);
	ft_list_foreach(list, print_i);
	printf("\n");

	return 0;
}



// end
