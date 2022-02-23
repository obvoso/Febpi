
#include <stdio.h>

int	get_len(char *str)
{
	int len = 0;
	while (str[len])
	{
		++len;
	}
	return (len);
}

char *ft_strrev(char *str)
{
	int i = 0;
	char tmp;
	int len = get_len(str);
	int tmplen = len;

	while (i < tmplen / 2)
	{
		tmp = str[i];
		str[i++] = str[--len];
		str[len] = tmp;
		
	}
	return (str);
}

int main()
{
	char str[] = "123456789";
	printf("%s\n", ft_strrev(str));
}
