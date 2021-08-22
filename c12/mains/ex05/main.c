#include <stdio.h>

#include "ft_list.h"



// funs
void	ft_list_push_back(t_list **root, void *data);
t_list *ft_list_push_strs(int n, char **strs);

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



// main
int	main(void)
{
	char *strings[] = {
		"one",
		"two",
		"three",
		"four",
	};
	
	t_list *list = ft_list_push_strs(4, strings);
	print_lists(list);

	return 0;
}



// end
