#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **ret;
	int i = 0;
	int j = 0;
	int k;
	
	ret = (char **)malloc(sizeof(char *) * 256);
	if (!ret)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		++i;
	while (str[i])
	{	
		k = 0;
		ret[j] = (char *)malloc(4096);
		if (!ret[j])
			return (NULL);
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			ret[j][k++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		ret[j][k] = 0;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}

int main()
{
	char str[] = "abcd 123	789\n XYZ";
	char **ret = ft_split(str);
	while (*ret)
		printf("%s\n", *ret++);

}
