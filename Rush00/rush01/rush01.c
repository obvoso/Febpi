/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:53:39 by schoe             #+#    #+#             */
/*   Updated: 2022/02/05 18:19:52 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top(int c_end, int c)
{
	if (c == 1)
		ft_putchar('/');
	else if (c == c_end)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	put_bottom(int c_end, int c)
{
	if (c == 1)
		ft_putchar('\\');
	else if (c == c_end)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	put_middle(int c_end, int c)
{
	if (c == 1 || c == c_end)
		ft_putchar('*');
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
				if (r == 1)
					put_top(x, c);
				else if (r == y)
					put_bottom(x, c);
				else
					put_middle(x, c);
				c++;
			}
			ft_putchar('\n');
			r++;
		}
	}
}
