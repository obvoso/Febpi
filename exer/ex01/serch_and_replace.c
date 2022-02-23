#include <unistd.h>

int	get_len(char *str)
{
	int len = 0;

	while (str[len])
		++len;
	return (len);
}
void	search_and_replace(char *str, char b, char a)
{
	while (*str)
	{
		if (*str == b)
			write(1, &a, 1);
		else
			write(1, str, 1);
		++str;
	}
}

int main(int argc, char **argv)
{
	int len1 = get_len(argv[2]);
	int len2 = get_len(argv[3]);
	if (argc == 4 && len1 == 1 && len2 == 1)
		search_and_replace(argv[1], *argv[2], *argv[3]);
	write(1, "\n", 1);
}
