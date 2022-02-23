#include <unistd.h>
#include <stdio.h>
int is_check(char *ret, char c)
{
	while (*ret)
	{
		if(*ret == c)
			return (0);
		++ret;
	}
	return (1);
}

void ft_inter(char *str1, char *str2)
{
	int len = 0;
	while(str1[len])
		++len;
	char ret[len];
	int i = 0;
	int j;
	while (*str1)
	{
		j = 0;
		while (str2[j])
		{
			if (*str1 == str2[j])
			{
				if (is_check(ret, *str1))
					ret[i++] = *str1;
			}
			++j;
		}
		++str1;
	}
	ret[i] = 0;
	i = 0;
	while (ret[i])
		write(1, &ret[i++], 1);
}


int main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
