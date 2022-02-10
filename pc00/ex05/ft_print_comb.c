/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:10:45 by soo               #+#    #+#             */
/*   Updated: 2022/02/05 09:35:00 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				ft_putchar (n1 + '0');
				ft_putchar (n2 + '0');
				ft_putchar (n3 + '0');
				if (n1 != 7)
					write (1, ", ", 2);
				++n3;
			}
			++n2;
		}
		++n1;
	}		
}
