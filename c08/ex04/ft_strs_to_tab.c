/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:02:27 by soo               #+#    #+#             */
/*   Updated: 2022/02/20 08:40:47 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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
	if (!src)
		return (0);
	return (str_cpy(ret, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*sp;

	i = 0;
	sp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!sp)
		return (0);
	while (i < ac)
	{
		sp[i].size = get_len(av[i]);
		sp[i].str = ft_strdup(av[i]);
		sp[i].copy = ft_strdup(av[i]);
		++i;
	}
	sp[i].str = 0;
	return (sp);
}
