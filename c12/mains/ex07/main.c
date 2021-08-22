#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
int		ft_list_size(t_list *list);
t_list *ft_list_at(t_list *list, unsigned int n);

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
	int size;
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
	printf("size: %i\n", (size = ft_list_size(list)));

	for (int i = 0; i < size; ++i)
		printf("%i: %i\n", i, *(int *)ft_list_at(list, i)->data);

	printf("5: %p\n", ft_list_at(list, 5));

	return 0;
}



// end
