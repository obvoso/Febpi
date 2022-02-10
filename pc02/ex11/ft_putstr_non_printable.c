/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:50:14 by soo               #+#    #+#             */
/*   Updated: 2022/02/10 15:54:33 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
			{
				ft_putchar("0123456789abcdef"[(unsigned char)str[i] / 16]);
				ft_putchar("0123456789abcdef"[(unsigned char)str[i] % 16]);
			}
			else
			{
				ft_putchar("0123456789abcdef"[(str[i]) / 16]);
				ft_putchar("0123456789abcdef"[(str[i]) % 16]);
			}
		}
		++i;
	}
}
