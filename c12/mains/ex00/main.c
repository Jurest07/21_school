#include <stdio.h>

#include "ft_list.h"



// funs
t_list	*ft_create_elem(void *data);

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
	int value = 43;
	
	t_list *list = ft_create_elem(&value);
	print_listi(list);

	return 0;
}



// end
