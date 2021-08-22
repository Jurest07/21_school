#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);

int main()

{
	int cres, sres;

	// Когда в dst хватает места 
	char cbuf1[128] = "То, что было";
	char sbuf1[128] = "То, что было";

	// Впритык
	char cbuf2[128] = "То, что было";
	char sbuf2[128] = "То, что было";

	// Меньше
	char cbuf3[128] = "То, что было";
	char sbuf3[128] = "То, что было";

	// nb меньше len(dst)
	char cbuf4[128] = "То, что было";
	char sbuf4[128] = "То, что было";


	// 1
	char *s1 =  ". Строка, которую нужно положить";
	cres = ft_strlcat( cbuf1, s1, 128 );
	sres = strlcat(    sbuf1, s1, 128 );

	printf("(%i) %s\n", cres, cbuf1);
	printf("(%i) %s\n", sres, sbuf1);
	printf("%i\n\n", strcmp(cbuf1, sbuf1));


	// 2
	char *s2 = "abcdef";
	cres = ft_strlcat( cbuf2, s2, strlen(cbuf2) + 6 );
	sres = strlcat(    sbuf2, s2, strlen(sbuf2) + 6 );

	printf("(%i) %s\n", cres, cbuf2);
	printf("(%i) %s\n", sres, sbuf2);
	printf("%i\n\n", strcmp(cbuf2, sbuf2));


	// 3
	char *s3 = "abcdefgh";
	cres = ft_strlcat( cbuf3, s3, strlen(cbuf3) + 6 );
	sres = strlcat(    sbuf3, s3, strlen(sbuf3) + 6 );

	printf("(%i) %s\n", cres, cbuf3);
	printf("(%i) %s\n", sres, sbuf3);
	printf("%i\n\n", strcmp(cbuf3, sbuf3));


	// 4
	char *s4 =  "abcdef";
	cres = ft_strlcat( cbuf4, s4, strlen(cbuf4) - 3 );
	sres = strlcat(    sbuf4, s4, strlen(sbuf4) - 3 );

	printf("(%i) %s\n", cres, cbuf4);
	printf("(%i) %s\n", sres, sbuf4);
	printf("%i\n\n", strcmp(cbuf4, sbuf4));
	

	return 0;
}

