/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:54:49 by soo               #+#    #+#             */
/*   Updated: 2022/02/14 09:29:46 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
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

void	recur(int nbr, char *base, int len)
{
	if (nbr < len)
		put_char(base[nbr]);
	else
	{
		recur(nbr / len, base, len);
		put_char(base[nbr % len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!base_check(base))
		return ;
	len = get_len(base);
	if (nbr >= len)
		recur(nbr, base, len);
	else if (nbr == -2147483648)
	{
		put_char('-');
		recur(-(nbr / len), base, len);
		put_char(base[-(nbr % len)]);
	}
	else if (nbr < 0)
	{
		put_char('-');
		recur(-nbr, base, len);
	}
	else
		put_char(base[nbr]);
}
