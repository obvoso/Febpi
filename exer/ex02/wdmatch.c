#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		while (argv[2][i])
			if (argv[2][i++] == argv[1][j])
				j += 1;
		if (!argv[1][j])
			write(1, argv[1], j);
	}
	write(1, "\n", 1);
}
