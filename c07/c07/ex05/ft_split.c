/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:42:59 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 20:28:45 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*str_cpy(char *start, char *end, char *ret)
{
	int	i;

	i = 0;
	while (start < end)
		ret[i++] = *start++;
	ret[i] = 0;
	return (ret);
}

int	cnt_charset(char *str, char *charset)
{	
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (is_in_charset(*str, charset))
			++cnt;
		++str;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	char	*start;
	int		i;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * cnt_charset(str, charset) + 1);
	while (*str)
	{	
		if (!is_in_charset(*str, charset))
		{
			start = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
		}
		ret[i] = (char *)malloc(str - start + 1);
		str_cpy(start, str, ret[i++]);
		++str;
	}
	ret[i] = 0;
	return (ret);
}
