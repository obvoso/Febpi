#include <stdlib.h>
#include <stdio.h>
long long ft_abs(long long n)
{
	if (n > 0)
		return (n);
	return (-n);
}
int *ft_rrange(int start, int end)
{
	int *ret;
	int i = 0;
	long long size = end - start;
	
	ret = (int *)malloc(sizeof(int) * ft_abs(size) + 1);
	while (start < end)
		ret[i++] = end--;
	while (start > end)
		ret[i++] = end++;
	ret[i] = end;
	return (ret);
}

int main()
{
	int start = 0;
	int end = -3;
	int size = ft_abs(end - start) + 1;	
	int i = 0;
	int *ret;

	ret = ft_rrange(start, end);

	while (i < size)
	{
		printf("%d\n", ret[i++]);
	}
}
