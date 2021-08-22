#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_foreach(t_list *root, void (*f)(void *));

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

void print_i(void *data)
{
	printf("%i ", *(int *)data);
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
	putchar('\n');

	return 0;
}



// end
