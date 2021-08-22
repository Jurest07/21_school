#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	long int	number;
	int 		*buff;
	int			*res;

	if (max <= min)
	   return (NULL);	
	number = max - min;
	buff = malloc(sizeof(int) * number);
	if (buff == NULL)
		return (NULL);
	res = buff;
	while (number > 0)
	{
		*buff = min;
		++buff;
		++min;
		--number;
	}
	return (res);
}
