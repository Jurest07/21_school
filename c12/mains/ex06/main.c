#include <stdio.h>

#include "ft_list.h"



// funs
t_list *ft_list_push_strs(int n, char **strs);
void	ft_list_clear(t_list *list, void (*free_fun)(void*));

void print_lists(t_list *list)
{
	if (!list)
	{
		printf("empty list\n");
		return;
	}

	for (; list; list = list->next)
		printf("%p -> %s\n", list->data, (char *)list->data);
}

void free_fiction(void *data)
{
	(void)data;
	return;
}



// main
int	main(void)
{
	char *strings[] = {
		"one",
		"two",
		"three",
		"four"
	};
	
	t_list *list = ft_list_push_strs(4, strings);

	print_lists(list);
	ft_list_clear(list, free_fiction);

	return 0;
}



// end
