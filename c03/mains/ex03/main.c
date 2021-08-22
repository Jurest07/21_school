#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dst, char *src, unsigned int nb);

int main()
{
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
	ft_strncat( cbuf1, s1, 128 - strlen(cbuf1) );
	strncat(    sbuf1, s1, 128 - strlen(sbuf1) );

	printf("%s\n", cbuf1);
	printf("%s\n", sbuf1);
	printf("%i\n\n", strcmp(cbuf1, sbuf1));


	// 2
	char *s2 = "abcdef";
	ft_strncat( cbuf2, s2, 6 );
	strncat(    sbuf2, s2, 6 );

	printf("%s\n", cbuf2);
	printf("%s\n", sbuf2);
	printf("%i\n\n", strcmp(cbuf2, sbuf2));


	// 3
	char *s3 = "abcdefgh";
	ft_strncat( cbuf3, s3, 6 );
	strncat(    sbuf3, s3, 6 );

	printf("%s\n", cbuf3);
	printf("%s\n", sbuf3);
	printf("%i\n\n", strcmp(cbuf3, sbuf3));


	// 4
	char *s4 =  "abcdef";
	ft_strncat( cbuf4, s4, 1 );
	strncat(    sbuf4, s4, 1 );

	printf("%s\n", cbuf4);
	printf("%s\n", sbuf4);
	printf("%i\n\n", strcmp(cbuf4, sbuf4));
	

	return 0;
}
