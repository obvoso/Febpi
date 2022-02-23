/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:47:09 by soo               #+#    #+#             */
/*   Updated: 2022/02/05 11:54:00 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	cul;
	int	row;

	cul = 1;
	while (cul <= b)
	{	
		row = 1;
		while (row <= a)
		{
			if ((row == 1 || row == a) && (cul == 1 || cul == b))
				ft_putchar('o');
			else if (cul == 1 || cul == b)
				ft_putchar('-');
			else if (row == 1 || row == a)
				ft_putchar('|');
			else 
				ft_putchar(' ');
			++row;
		}
		ft_putchar('\n');
		++cul;
	}	
}
