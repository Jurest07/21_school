#include <unistd.h>
#include "ft.h"

#define FALSE 0
#define TRUE 1

typedef int	t_bool;





void	nvx_write_hex(char ch)
{
	char	str[2];

	if (ch / 16 < 10)
		str[0] = '0' + ch / 16;
	else
		str[0] = 'a' + ch / 16 - 10;
	if (ch % 16 < 10)
		str[1] = '0' + ch % 16;
	else
		str[1] = 'a' + ch % 16 - 10;
	write(1, str, 2);
}

void	nvx_write_addr(void *addr)
{
	unsigned int	i;

	i = 0;
	while (i < sizeof(addr))
	{
		nvx_write_hex(*((char *)addr + i));
		++i;
	}
}

void	nvx_write_bytes(void *data, unsigned int beg, unsigned int end)
{
	while (beg < end)
	{
		nvx_write_hex(*((char *)data + beg));
		++beg;
		if (beg >= end)
			break ;
		nvx_write_hex(*((char *)data + beg));
		++beg;
		if (beg < end)
			write(1, " ", 1);
	}
}

void	nvx_write_printable(void *data, unsigned int beg, unsigned int end)
{
	while (beg < end)
	{
		if (*((char *)data + beg) >= 32 && *((char *)data + beg) <= 126)
			write(1, (char *)data + beg, 1);
		else
			write(1, ".", 1);
		++beg;
	}
}

void	ft_print_memory(void *data, unsigned int size)
{
	unsigned int	i;
	unsigned int	end;
	unsigned int	step;

	step = sizeof(data) * 2;
	i = 0;
	while (i < size)
	{
		nvx_write_addr(data + i / step);
		write(1, ": ", 2);
		if (i + step < size)
			end = i + step;
		else
			end = size;
		nvx_write_bytes(data, i, end);
		write(1, " ", 1);
		nvx_write_printable(data, i, end);
		write(1, "\n", 1);
		i += step;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	n;
	long long	base;
	long long	val;
	t_bool		was;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	base = 1000000000;
	was = FALSE;
	while (base)
	{
		val = n / base;
		if (val || was || base == 1)
		{
			ft_putchar('0' + val);
			was = TRUE;
		}
		n %= base;
		base /= 10;
	}
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	lis_write_not_printable(char ch)
{
	char	str[3];

	str[0] = '\\';
	if (ch / 16 < 10)
		str[1] = '0' + ch / 16;
	else
		str[1] = 'a' + ch / 16 - 10;
	if (ch % 16 < 10)
		str[2] = '0' + ch % 16;
	else
		str[2] = 'a' + ch % 16 - 10;
	write(1, str, 3);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			lis_write_not_printable(*str);
		++str;
	}
}

char	*ft_strcpy(char *dst, char *src)
{
	char	*dstcp;

	dstcp = dst;
	while (*src != '\0')
	{
		*dst = *src;
		++src;
		++dst;
	}
	*dst = '\0';
	return (dstcp);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int n)
{
	unsigned int	s;
	int				end;

	s = 0;
	end = 0;
	while (src[s] != '\0')
	{
		if (s < n - 1)
			dst[s] = src[s];
		else if (!end)
		{
			dst[s] = '\0';
			end = 1;
		}
		++s;
	}
	if (!end)
		dst[s] = '\0';
	return (s);
}

int	ft_strlen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (*(str++) != '\0')
		++len;
	return (len);
}

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
			*p += 'a' - 'A';
		++p;
	}
	return (str);
}

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	char	*dstcp;

	dstcp = dst;
	while (*src != '\0' && n--)
		*(dst++) = *(src++);
	while (n && n-- != (unsigned int) -1)
		*(dst++) = '\0';
	return (dstcp);
}

char	*ft_strupcase(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p += 'A' - 'a';
		++p;
	}
	return (str);
}

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	ft_strcmp(char *lhs, char *rhs)
{
	while (*lhs != '\0' && *rhs != '\0')
	{
		if (*lhs < *rhs)
			return (-1);
		if (*lhs > *rhs)
			return (1);
		++lhs;
		++rhs;
	}
	if (*lhs == '\0' && *rhs == '\0')
		return (0);
	if (*lhs == '\0')
		return (-2);
	return (2);
}

int	ft_strncmp(char *lhs, char *rhs, unsigned int n)
{
	while (*lhs != '\0' && *rhs != '\0' && n)
	{
		if (*lhs < *rhs)
			return (-1);
		if (*lhs > *rhs)
			return (1);
		++lhs;
		++rhs;
		--n;
	}
	if (!n)
		return (0);
	if (*lhs == '\0' && *rhs == '\0')
		return (0);
	if (*lhs == '\0')
		return (-2);
	return (2);
}

char	*ft_strcat(char *dst, char *src)
{
	char	*p;

	p = dst;
	while (*p != '\0')
		++p;
	while (*src != '\0')
		*(p++) = *(src++);
	*p = '\0';
	return (dst);
}

char	*ft_strncat(char *dst, char *src, unsigned int nb)
{
	char	*p;

	p = dst;
	while (*p)
		++p;
	while (*src && nb--)
		*(p++) = *(src++);
	*p = '\0';
	return (dst);
}

char	*ft_strstr(char *str, char *sub)
{
	char	*pstr;
	char	*psub;

	while (*str)
	{
		psub = sub;
		pstr = str;
		while (*psub && *pstr && *psub == *pstr)
		{
			++psub;
			++pstr;
		}
		if (!*psub)
			return (str);
		++str;
	}
	return (0);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	len;
	int				end;

	len = 0;
	end = 0;
	while (dst[len])
		++len;
	while (*src)
	{
		if (len < size - 1)
			dst[len] = *src;
		else if (!end)
		{
			dst[len] = '\0';
			end = 1;
		}
		++src;
		++len;
	}
	if (!end)
		dst[len] = '\0';
	return (len);
}
