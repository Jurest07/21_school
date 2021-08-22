#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_btree.h"





// funs
t_btree	*btree_create_node(void *item);
void	btree_apply_infix(t_btree *root, void (*fun)(void *));

char const *updown      = "│";
char const *leftright   = "─";
char const *upright     = "└";
char const *uprightdown = "├";

char const *tabothadd_left  = "├─ ";
char const *tabmeadd_left   = "│  ";
char const *tabothadd_right = "└─ ";
char const *tabmeadd_right  = "   ";

char *create_str(char const *one, char const *two)
{
	char *s = malloc(sizeof(char) * (strlen(one) + strlen(two) + 1));
	char *p = s;

	while (*one)
		*p++ = *one++;
	while (*two)
		*p++ = *two++;
	*p = '\0';
	return s;
}

void _nvx_btreei_print(t_btree *tree, char *tabme, char *taboth)
{
	printf("%s%i\n", tabme, *(int *)tree->item);
	char *one;
	char *two;
	t_btree *chs[] = { tree->left, tree->right };
	
	for (int i = 0; i < 2; ++i)
	{
		if (!chs[i])
			continue;

		if (i == 0 && chs[1])
		{
			one = create_str(taboth, tabothadd_left);
			two = create_str(taboth, tabmeadd_left);
			_nvx_btreei_print(chs[i], one, two);
			free(one);
			free(two);
		}
		else
		{
			one = create_str(taboth, tabothadd_right);
			two = create_str(taboth, tabmeadd_right);
			_nvx_btreei_print(chs[i], one, two);
			free(one);
			free(two);
		}
	}
}

void nvx_btreei_print(t_btree *tree)
{
	_nvx_btreei_print(tree, "", "");
}

void print_int(void *num)
{
	printf("%i ", *(int *)num);
}





// main
int	main(void)
{
	int values[] = {
		0, 1, 2, 3, 4, 5, 6, 7
	};

	t_btree *tree            = btree_create_node(values);
	tree->left               = btree_create_node(values+1);
	tree->left->left         = btree_create_node(values+3);
	tree->left->right        = btree_create_node(values+4);
	tree->right              = btree_create_node(values+2);
	tree->right->left        = btree_create_node(values+5);
	tree->right->right       = btree_create_node(values+6);
	tree->right->right->left = btree_create_node(values+7);

	nvx_btreei_print(tree);
	printf("\n");

	btree_apply_infix(tree, &print_int);
	printf("\n");

	return 0;
}



// end
