/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:13:58 by soo               #+#    #+#             */
/*   Updated: 2022/02/06 20:28:46 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else if (nb < 0 && nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(-(nb / 10));
		ft_putchar(-(nb % 10) + '0');
	}
	else if (nb < 0 && nb > -10)
	{
		ft_putchar('-');
		ft_putchar(-nb + '0');
	}
	else
		ft_putchar(nb + '0');
}
