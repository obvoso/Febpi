/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:57:55 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 11:02:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char **strs, int size)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			++len;
		++i;
	}
	return (len);
}

char	*str_combine(int size, char **strs, char *sep, char *ret)
{
	int	ret_idx;
	int	sep_idx;
	int	i;
	int	j;

	i = 0;
	ret_idx = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ret[ret_idx++] = strs[i][j++];
		++i;
		if (i < size)
		{
			sep_idx = 0;
			while (sep[sep_idx])
				ret[ret_idx++] = sep[sep_idx++];
		}
	}
	ret[ret_idx] = 0;
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strs_len;
	int		sep_len;
	char	*ret;

	sep_len = 0;
	while (sep[sep_len])
		++sep_len;
	if (size)
	{
		strs_len = get_len(strs, size);
		ret = (char *)malloc(strs_len + (sep_len * (size - 1)) + 1);
		str_combine(size, strs, sep, ret);
	}
	else
	{
		ret = (char *)malloc(1);
		*ret = 0;
	}
	return (ret);
}	
