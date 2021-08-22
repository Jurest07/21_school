#include <stdio.h>

#include "ft_list.h"



// prototypes
void	ft_list_push_back(t_list **root, void *data);
void	ft_list_foreach(t_list *root, void (*f)(void *));

void	ft_list_remove_if(
	t_list **root,
	void *data,
	int (*cmp)(),
	void (*free_fun)(void *)
);



// funs
void print_i(void *data)
{
	printf("%i ", *(int *)data);
}

int	suitable_int(int *val)
{
	return !(*val > 43 && *val < 57);
}

void free_fiction(void *data)
{
	(void)data;
	return;
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
	ft_list_remove_if(&list, NULL, suitable_int, free_fiction);
	ft_list_foreach(list, print_i);
	putchar('\n');

	return 0;
}



// end
