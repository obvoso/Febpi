#include <unistd.h>

void	repeat_alpha(char *str)
{
	int 	i;

	while (*str)
	{
		i = 0;
		if (*str >= 'a' && *str <= 'z')
		{
			while (i <= (*str - 'a'))
			{
				write(1, str, 1);
				++i;
			}
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			while (i <= (*str - 'A'))
			{
				write(1, str, 1);
				++i;
			}
		}
		else
			write(1, str, 1);
		++str;
		
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
}

