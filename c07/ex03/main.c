#include <stdio.h>
#include <stdlib.h>


char	*ft_strjoin(int size, char **strs, char *sep);
int		nvx_strlen(char *str);


int main(void)
{
	char *strings[] = {
		"appledghdsgk[dp;hedy",     // 5
		"bananwgdsdgsda",    // 6
		"pineapplefdredsg", // 9
		"orangeretdst sdtfsd",    // 6
	};

	char *sep = " <--------> "; // 26 + 6 * 3 = 44

	int const n = sizeof(strings) / sizeof(char *);

	char *res = ft_strjoin(n, strings, sep);
	int len = 0;
	printf("(%i) %s\n", len, res);
	fflush(stdout);
	free(res);

	res = ft_strjoin(0, NULL, NULL);
	len = 0;
	printf("(%i) %s\n", len, res);
	fflush(stdout);
	free(res);


	return 0;
}
