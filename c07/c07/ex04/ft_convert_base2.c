/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:26:20 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 17:59:27 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			base_check(char *base);
long long	atoi_base(char *nbr, char *base, int len);
long long	atoi_base2(char *nbr, char *base, int len);

char	*putnbr_base(int dec, char *base_to, int len)
{
	char	*ret;
	int		dec_tmp;
	int		cnt;

	cnt = 0;
	dec_tmp = dec;
	if (dec < 0)
	{
		++cnt;
		dec_tmp *= -1;
	}
	while (dec_tmp)
	{
		dec_tmp /= len;
		++cnt;
	}
	ret = (char *)malloc(cnt + 1);
	ret[cnt] = 0;
	ret = putnbr_base2(dec, base_to, cnt, ret);
	return (ret);
}

char	*putnbr_base2(int dec, char *base_to, int cnt, char *ret)
{
	int	len;

	len = 0;
	while (base_to[len])
		++len;
	if (dec < 0)
	{
		ret[0] = '-';
		dec *= -1;
	}
	while (dec)
	{
		ret[--cnt] = base_to[dec % len];
		dec /= len;
	}
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	dec;
	int			f_len;
	int			t_len;
	char		*ret;

	f_len = base_check(base_from);
	t_len = base_check(base_to);
	if (f_len && t_len)
	{
		dec = atoi_base(nbr, base_from, f_len);
		if (dec == 0)
		{
			ret = (char *)malloc(2);
			ret[0] = base_to[0];
			ret[1] = 0;
			return (ret);
		}
		if (dec > 2147483647 || dec < -2147483648)
			return (0);
		ret = putnbr_base((int)dec, base_to, t_len);
		return (ret);
	}
	return (0);
}
