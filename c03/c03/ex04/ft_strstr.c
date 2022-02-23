/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:55:07 by soo               #+#    #+#             */
/*   Updated: 2022/02/13 13:13:33 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{	
	char	*sp;
	char	*fp;

	if (*to_find == 0)
		return (str);
	if (get_len(str) < get_len(to_find))
		return (0);
	while (*str)
	{
		sp = str;
		fp = to_find;
		while (*fp && (*fp == *sp))
		{
			++sp;
			++fp;
		}
		if (*fp == 0)
			return (str);
		++str;
	}
	return (0);
}
