/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:39:40 by soo               #+#    #+#             */
/*   Updated: 2022/02/20 09:19:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int n)
{
	if (n / 10)
		put_nbr(n / 10);
	put_char((n % 10) + '0');
}

void	ft_put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (!par)
		return ;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		put_char('\n');
		if (!par[i].size)
			put_char('0');
		else
			put_nbr(par[i].size);
		put_char('\n');
		ft_put_str(par[i].copy);
		put_char('\n');
		++i;
	}
}
