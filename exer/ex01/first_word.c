#include <unistd.h>

void	fst_word(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		fst_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
