/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:29:50 by soo               #+#    #+#             */
/*   Updated: 2022/02/05 18:25:45 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top_bottom(int end_c, int c)
{
	if (c == 1)
		ft_putchar('A');
	else if (c == end_c)
		ft_putchar('C');
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

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	if (x > 0 && y > 0)
	{
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
			ft_putchar('\n');
			r++;
		}
	}
}
