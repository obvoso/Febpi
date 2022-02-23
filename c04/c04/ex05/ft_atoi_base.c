/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:46:59 by soo               #+#    #+#             */
/*   Updated: 2022/02/14 12:26:38 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base)
{
	int	i;
	int	j;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

int	is_in_base(char c, char *base, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (c == base[i])
			return (i);
		++i;
	}
	return (-1);
}

char	*str_check(char *str, int *sign)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		++str;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	sign;
	int	ret;
	int	n;

	if (!base_check(base))
		return (0);
	len = get_len(base);
	sign = 1;
	ret = 0;
	str = str_check(str, &sign);
	n = 0;
	while (*str)
	{
		n = is_in_base(*str, base, len);
		if (n == -1)
			break ;
		else
			ret = (ret * len) + n;
		++str;
	}
	return (ret * sign);
}
