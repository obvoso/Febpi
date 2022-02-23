#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			put_char(*str - 32);
		else if (*str >= 'A' && *str <= 'Z')
			put_char(*str + 32);
		else
			put_char(*str);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}
