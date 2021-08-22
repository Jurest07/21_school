#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ft_btree.h"





// funs
t_btree	*btree_create_node(void *item);

void	btree_insert_data(
	t_btree **root,
	void *item,
	int (*cmp)(void *, void *)
);

void nvx_btreei_print(t_btree *tree);

void print_int(void *num)
{
	printf("%i ", *(int *)num);
}

int intcmp(void *lhs, void *rhs)
{
	return *(int *)lhs < *(int *)rhs ? -1 : *(int *)rhs < *(int *)lhs ? 1 : 0;
}





// main
int	main(void)
{
	srand(time(NULL));
	int const n = 30;

	int *value;
	t_btree *tree = NULL;
	for (int i = 0; i < n; ++i)
	{
		value = malloc(sizeof(int));
		*value = random() % 30 - 15;
		btree_insert_data(&tree, value, intcmp);
	}
	nvx_btreei_print(tree);
	printf("\n");

	return 0;
}



// end
