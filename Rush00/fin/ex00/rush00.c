/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:53:39 by schoe             #+#    #+#             */
/*   Updated: 2022/02/06 21:52:41 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c);

void	put_top_bottom(int end_c, int c)
{
	if (c == 1 || c == end_c)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	put_middle(int end_c, int c)
{
	if (c == 1 || c == end_c)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	put_rect(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (r == 1 || r == y)
				put_top_bottom(x, c);
			else
				put_middle(x, c);
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}

int	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		put_rect(x, y);
		return (0);
	}
	else
	{
		write(1, "You have to enter a natural number.\n", 36);
		return (1);
	}
}
