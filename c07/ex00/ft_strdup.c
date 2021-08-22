#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*buff;
	char	*res;
	int		len_str;
	
	len_str = 0;
	buff = str;
	while (*(str++) != '\0')
		++len_str;
	res = malloc (sizeof(char) * (len_str + 1));
	if (res == 0)
		return (0);
	while (*buff != '\0')
	{
		*res = *buff;
		++res;
		++buff;
	}
	*res = '\0';
	res = res - len_str;
	return (res);
}
