/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:25:21 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 17:40:15 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

long long	atoi_base(char *nbr, char *base, int len)
{
	int			i;
	int			sign;

	sign = 1;
	ret = 0;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
		++nbr;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		++nbr;
	}
	return (atoi_bas2(nbr, base, len) * sign);
}

long long	atoi_base2(char *nbr, char *base, int len)
{
	long long	ret;

	ret = 0;
	while (*nbr)
	{
		i = 0;
		while (base[i])
		{
			if (*nbr == base[i])
				ret = (ret * len) + i;
			++i;
		}
		++nbr;
	}
	return (ret);
}
