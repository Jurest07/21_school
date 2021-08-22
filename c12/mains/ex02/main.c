#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_front(t_list **root, void *data);
int		ft_list_size(t_list *list);

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
	int a, b, c;
	a = 43;
	b = 45;
	c = 49;
	
	t_list *list = NULL;
	ft_list_push_front(&list, &a);
	ft_list_push_front(&list, &b);
	ft_list_push_front(&list, &c);
	print_listi(list);
	printf("size: %i\n", ft_list_size(list));

	return 0;
}



// end
