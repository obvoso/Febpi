#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			put_char(*str + 1);
		else if (*str == 'z' || *str == 'Z')
			put_char(*str - 25);
		else
			put_char(*str);
		++str;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
}
