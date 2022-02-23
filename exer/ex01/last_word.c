#include <unistd.h>

void last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	--i;
	while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		--i;
	++i;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
