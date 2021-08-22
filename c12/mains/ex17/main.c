#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_sorted_list_insert(t_list **root, void *data, int (*cmp)());
void ft_sorted_list_merge(t_list **root, t_list *list, int (*cmp)());

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
	
	printf("list 1:\n");
	t_list *list = NULL;
	ft_list_push_back(&list, &a);
	ft_list_push_back(&list, &b);
	ft_list_push_back(&list, &c);
	ft_list_push_back(&list, &d);
	print_listi(list);
	putchar('\n');

	printf("list 2:\n");
	t_list *list2 = NULL;
	ft_list_push_back(&list2, &e);
	ft_list_push_back(&list2, &f);
	ft_list_push_back(&list2, &g);
	ft_list_push_back(&list2, &h);
	print_listi(list2);
	putchar('\n');

	printf("merged:\n");
	ft_sorted_list_merge(&list, list2, intcmp);
	print_listi(list);

	return 0;
}



// end
