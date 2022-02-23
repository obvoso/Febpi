#include <unistd.h>

int get_len(char *str)
{
	int len = 0;
	while (str[len])
		++len;
	return (len);
}

int	is_check(char *str, char c)
{
	while (*str)
	{
		if (c == *str)
			return (0);
		++str;
	}
	return (1);
}

void ft_union(char *str1, char *str2)
{
	int len1 = get_len(str1);
	int len2 = get_len(str2);
	char ret[len1 + len2];
	int i = 0;

	while (*str1)
	{
		if (is_check(ret, *str1))
			ret[i++] = *str1;
		++str1;
	}
	while (*str2)
	{
		if(is_check(ret, *str2))
			ret[i++] = *str2;
		++str2;
	}
	ret[i] = 0;
	i = 0;
	while (ret[i])
		write(1, &ret[i++], 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}	
