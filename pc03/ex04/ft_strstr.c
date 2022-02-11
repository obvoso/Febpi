
char	*ft_strstr(char *str, char *to_find)
{
	char	*sp;
	char	*fp;
	int	flag;

	flag = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		while (*str != *to_find)
			++str;
		sp = str;
		fp = to_find;
		while (*fp)
		{
			if (*fp == *sp)
				flag = 1;
			else
			{
				flag = 0;
				break ;
			}
			++fp;
			++sp;
		}
		if (flag)
			return (str);
		++str;
	}
	return (0);
}
