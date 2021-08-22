#include <stdio.h>



void	ft_sort_string_tab(char **strs);



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

	ft_sort_string_tab(strings);
	
	char **p = strings;
	while (*p)
		printf("%s\n", *(p++));

	return 0;
}



// end
