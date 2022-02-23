#include "ft_putchar.c"
#include "ft_swap.c"
#include "ft_putstr.c"
#include "ft_strlen.c"
#include "ft_strcmp.c"
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	ft_putchar('a');
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	ft_putstr("abc");
	ft_strlen("abc");
	ft_strcmp("aaa", "aac");
}
