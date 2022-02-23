/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juim <juim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:22:43 by juim              #+#    #+#             */
/*   Updated: 2022/02/06 21:52:55 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	put_top(int end_c, int c)
{
	if (c == 1 || c == end_c)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	put_middle(int end_c, int c)
{
	if (c == 1 || c == end_c)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	put_bottom(int end_c, int c)
{
	if (c == 1 || c == end_c)
		ft_putchar('C');
	else
		ft_putchar('B');
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
			if (r == 1)
				put_top(x, c);
			else if (r == y)
				put_bottom(x, c);
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
