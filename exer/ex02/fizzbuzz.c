#include <unistd.h>

void put_char(int i)
{
	char c;
	if (i > 9)
	{
		c = (i / 10) + '0';
		write(1, &c, 1);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if ((!(i % 3) && !(i % 5)))
			write(1, "fizzbuzz\n",9);
		else if (!(i % 3))
			write(1, "fizz\n", 5);
		else if(!(i % 5))
			write(1, "buzz\n", 5);
		else
			put_char(i);
		++i;
	}

}
