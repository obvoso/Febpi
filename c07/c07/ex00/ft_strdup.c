/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:02:40 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 11:24:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*str_cpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		str1[i] = str2[i];
		++i;
	}
	str1[i] = 0;
	return (str1);
}

char	*ft_strdup(char *src)
{
	char	*ret;

	ret = (char *)malloc(get_len(src) + 1);
	if (!ret)
		return (0);
	return (str_cpy(ret, src));
}
