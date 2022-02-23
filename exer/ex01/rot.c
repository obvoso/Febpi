#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void rot(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			put_char(*str + 13);
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			put_char(*str - 13);
		else
			put_char(*str);
		++str;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot(argv[1]);
	write(1, "\n", 1);
}
