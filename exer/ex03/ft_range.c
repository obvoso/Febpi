#include <stdlib.h>
#include <stdio.h>
long long ft_abs(long long n)
{
	if (n > 0)
		return (n);
	return (-n);
}

int *ft_range(int start, int end)
{
	int *ret;
	int i = 0;
	long long size = end - start;

	ret = (int *)malloc(sizeof(int) * ft_abs(size) + 1);

	while (start < end)
		ret[i++] = start++;
	while (start > end)
		ret[i++] = start--;
	ret[i] = end;
	return (ret);
}

int main()
{
	int i = 0;
	int start = 0;
	int end = -3;
	int *ret;

	ret = ft_range(start, end);
	while (i < ft_abs(end - start) + 1)
	{
		printf("%d\n", ret[i++]);
	}

}
