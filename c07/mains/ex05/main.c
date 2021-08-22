#include <stdio.h>



char **ft_split(char *str, char *charset);



void print_string(char *str)
{
	for (; *str; ++str)
	{
		if (*str != '\n' && *str != '\t')
			putchar(*str);
		else
			putchar('\\'),
			putchar(*str == '\n' ? 'n' : 't');
	}
}



int main(void)
{
	char *strings[] = {
		"Hello, World!\nIt's Great! ",        " \t\n",
		" one two  three   four  \t\t  ",     " \t\n",
		"one | break  | dsdds||||ds;;ds;was", "|;",
	};

	int const n = sizeof(strings) / sizeof(char *);

	char **words;
	for (int i = 0; i < n; i += 2)
	{
		words = ft_split(strings[i], strings[i+1]);
		print_string(strings[i]);
		printf(": ");

		if (words) for (; *words; ++words)
		{
			printf("%s", *words);
			if (*(words + 1))
				printf("&");
		}
		else
			printf("NULL");
		printf("\n");
	}

	return 0;
}
