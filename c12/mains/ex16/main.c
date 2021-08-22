#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_sorted_list_insert(t_list **root, void *data, int (*cmp)());

void print_listi(t_list *list)
{
	if (!list)
	{
		printf("empty list\n");
		return;
	}

	for (; list; list = list->next)
		printf("%p -> %i\n", list->data, *(int *)list->data);
}

int intcmp(int *lhs, int *rhs)
{
	return *lhs < *rhs ? -1 : *lhs > *rhs ? 1 : 0;
}



// main
int	main(void)
{
	int a, b, c, d, e, f, g, h;
	a = 43; b = 45;
	c = 49; d = 57;
	e = 42; f = 45;
	g = 48; h = 60;
	
	t_list *list = NULL;
	ft_sorted_list_insert(&list, &a, intcmp);
	ft_sorted_list_insert(&list, &b, intcmp);
	ft_sorted_list_insert(&list, &c, intcmp);
	ft_sorted_list_insert(&list, &d, intcmp);
	print_listi(list);

	printf("inserting\n");
	ft_sorted_list_insert(&list, &e, intcmp);
	ft_sorted_list_insert(&list, &f, intcmp);
	ft_sorted_list_insert(&list, &g, intcmp);
	ft_sorted_list_insert(&list, &h, intcmp);
	print_listi(list);

	return 0;
}



// end
