/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:08:40 by soo               #+#    #+#             */
/*   Updated: 2022/02/20 18:41:00 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

int	get_size(char *str, char *charset)
{
	int	size;

	size = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			++size;
			while (*str && !is_in_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (size);
}

char	*str_cpy(char *ret, char *str, char *start)
{
	int	i;

	i = 0;
	while (start < str)
	{
		ret[i] = *start++;
		++i;
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	char	*start;
	int		i;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * get_size(str, charset) + 1);
	if (!ret)
		return (0);
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			start = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
			ret[i] = (char *)malloc(str - start + 1);
			str_cpy(ret[i++], str, start);
		}
		++str;
	}
	ret[i] = 0;
	return (ret);
}
