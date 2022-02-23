/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:23:31 by schoe             #+#    #+#             */
/*   Updated: 2022/02/06 21:53:24 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c);

void	put_top(int c_end, int c)
{
	if (c == 1)
		ft_putchar('A');
	else if (c == c_end)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	put_bottom(int c_end, int c)
{
	if (c == 1)
		ft_putchar('C');
	else if (c == c_end)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	put_middle(int c_end, int c)
{
	if (c == 1 || c == c_end)
		ft_putchar('B');
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
