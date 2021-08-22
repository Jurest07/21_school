#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main()
{
	char s1[64] = "Hello, world!";
	char s2[64] = "hello";
	char s3[64] = "What is your name? 1234";
	char s4[64] = "OKDl98449, adf, df, ;lskd f843  ASDFa 48 fa slkdf";
	char s5[64] = "lkdsDlskd";
	char s6[64] = "";

	char *ps[] = {
		s1, s2, s3, s4, s5, s6
	};

	for (char **p = ps; p < ps + 6; ++p)
	{
		printf("%s\n", *p);
		ft_strlowcase(*p);
		printf("%s\n\n", *p);
	}

	return 0;
}
