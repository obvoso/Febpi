/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:53:39 by schoe             #+#    #+#             */
/*   Updated: 2022/02/05 18:11:17 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			r++;
			ft_putchar('\n');
		}
	}
}
