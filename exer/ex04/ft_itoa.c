#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{	
	char *ret;	
	int len = 0;
	int n_tmp;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
		return ("0\0");
	n_tmp = nbr;
	if (n_tmp < 0)
	{
		++len;
		n_tmp *= -1;
	}
	while (n_tmp)
	{
		++len;
		n_tmp /= 10;
	}
	ret = (char *)malloc(len + 1);
	if (!ret)
		return NULL;
	ret[len] = 0;
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		ret[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (ret);
}

int main()
{
	printf("%s\n", ft_itoa(20));
}
