#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	int len;

	len = ft_strlen(str);
	write (1, str, len); 
}
