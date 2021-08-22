#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);

int main()
{
	char *strings[] = {
		"---+++   --++84374",
		"0",
		"10000",
		"05478tds843",
		"     --  2147483647",
		"----------++++++++++++-2147483648",
	};

	int numbers[] = {
		-84374,
		0, 10000, 5478,
		2147483647,
		-2147483648,
	};

	int const n = sizeof(numbers) / sizeof(int);

	int result;
	for (int i = 0; i < n; ++i)
	{
		result = ft_atoi_base(strings[i], "0123456789");
		printf( "'%33s': (%i, %i) %i\n",
			strings[i], result,
			numbers[i], numbers[i] == result );
	}



	char *bases[] = {
		"onetwidkajs",
		"onetwidkajso",
		"+0123456789",
		"-0123456789",
		"0 23456789",
		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"",
		"a",
		":!@#$%^&*()=_;\\/",
	};

	int const basec = sizeof(bases) / sizeof(char *);

	printf("\nCheck bases\n");
	for (int i = 0; i < basec; ++i)
	{
		printf("'%62s': %i\n", bases[i], check_base(bases[i]));
	}

	return 0;
}
