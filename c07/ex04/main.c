#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char	*ft_convert_base(char *num, char *from_base, char *to_base);
int		nvx_strlen(char *str);


int main(void)
{
	char *decbase = "0123456789";
	char *hexbase = "0123456789abcdef";
	char *octbase = "01234567";
	char *binbase = "01";

	char *numbers[] = {
		"0",     octbase, decbase, "0",
		"0",     hexbase, decbase, "0",
		"0",     binbase, decbase, "0",

		"1232",  octbase, decbase, "666",
		"ff",    hexbase, decbase, "255",
		"1110",  binbase, decbase, "14",
		"1001",  binbase, hexbase, "9",
		"8954",  decbase, hexbase, "22fa",
		"8954",  decbase, octbase, "21372",
		"22fa",  hexbase, octbase, "21372",
		"21372", octbase, decbase, "8954",
		"21372", octbase, hexbase, "22fa",

		"-0",     octbase, decbase, "0",
		"-0",     hexbase, decbase, "0",
		"-0",     binbase, decbase, "0",

		"-1232",  octbase, decbase, "-666",
		"-ff",    hexbase, decbase, "-255",
		"-1110",  binbase, decbase, "-14",
		"-1001",  binbase, hexbase, "-9",
		"-8954",  decbase, hexbase, "-22fa",
		"-8954",  decbase, octbase, "-21372",
		"-22fa",  hexbase, octbase, "-21372",
		"-21372", octbase, decbase, "-8954",
		"-21372", octbase, hexbase, "-22fa",

		"  ---++++-1232", octbase, decbase, "666",
		"- --+++--ff",    hexbase, decbase, "0",
		"- --+++--tf",    hexbase, decbase, "0",
		"  -----1110",    binbase, decbase, "-14",
		" ++1001",        binbase, hexbase, "9",
		"-+-+-+-+8954",   decbase, hexbase, "22fa",
	};

	int const n = sizeof(numbers) / sizeof(char *);

	char *res;
	for (int i = 0; i < n; i += 4)
	{
		res = ft_convert_base(numbers[i], numbers[i+1], numbers[i+2]);
		printf( "(%16s -> %16s; %14s -> %6s): %-6s %i\n",
			numbers[i+1], numbers[i+2],
			numbers[i], numbers[i+3],
			res ? res : "NULL", strcmp(res ? res : "NULL", numbers[i+3]) ? 0 : 1 );
		fflush(stdout);
		free(res);
	}

	return 0;
}
