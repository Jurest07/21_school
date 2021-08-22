#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_reverse(t_list **root);

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
	print_listi(list);
	printf("reverse\n");
	ft_list_reverse(&list);
	print_listi(list);

	return 0;
}



// end
