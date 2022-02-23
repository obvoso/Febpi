/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:25:21 by soo               #+#    #+#             */
/*   Updated: 2022/02/19 09:56:11 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			base_check(char *base);
long long	ft_atoi_base(char *nbr, char *base, int len);
long long	ft_atoi_base2(char *nbr, char *base, int len);

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

long long	ft_atoi_base(char *nbr, char *base, int len)
{
	int			sign;

	sign = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
		++nbr;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		++nbr;
	}
	return (ft_atoi_base2(nbr, base, len) * sign);
}

long long	ft_atoi_base2(char *nbr, char *base, int len)
{
	long long	ret;
	int			i;

	ret = 0;
	while (*nbr)
	{
		i = 0;
		while (base[i])
		{
			if (*nbr == base[i])
			{
				ret = (ret * len) + i;
				break ;
			}
			++i;
		}
		if (i == len && *nbr != base[i - 1])
			break ;
		++nbr;
	}
	return (ret);
}
