#include <stdio.h>



void	ft_advanced_sort_string_tab(char **strs, int(*cmp)(char *, char *));

int	ft_strcmp(char *lhs, char *rhs)
{
	while (*lhs != '\0' && *rhs != '\0')
	{
		if (*lhs < *rhs)
			return (-1);
		if (*lhs > *rhs)
			return (1);
		++lhs;
		++rhs;
	}
	if (*lhs == '\0' && *rhs == '\0')
		return (0);
	if (*lhs == '\0')
		return (-2);
	return (2);
}

// main
int	main(void)
{
	char *strings[] = {
		"abcdef",
		"bdsdf",
		"aabd",
		"cdfas",
		"efds",
		"bdfsafs",
		"bda",
		"aaa",
		"ddd",
		NULL
	};

	ft_advanced_sort_string_tab(strings, ft_strcmp);
	
	char **p = strings;
	while (*p)
		printf("%s\n", *(p++));

	return 0;
}



// end
