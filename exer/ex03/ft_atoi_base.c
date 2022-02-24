#include <stdio.h>

int is_valid(char c, int len)
{
	if (len >= 2 && len <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'a' + len - 10) || (c >= 'A' && c <= 'A' + len - 10));
}

int ft_atoi_base(const char *str, int str_base)
{
	int ret = 0;
	int sign = 1;

	if ((*str == 0) || str_base > 16 || str_base < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str && is_valid(*str, str_base))
	{
		if (*str >= '0' && *str <= '9')
			ret = ret * str_base + *str - '0';
		else if(*str >= 'a' && *str <= 'f')
			ret = ret * str_base + *str - 'a' + 10;
		else if (*str <= 'A' && *str <= 'F')
			ret = ret * str_base + *str - 'A' + 10;
		++str;
	}
	return (ret * sign);
}

int main()
{
	printf("%d\n", ft_atoi_base("-12346570", 10));
}
