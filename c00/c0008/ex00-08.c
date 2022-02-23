/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:32:31 by soo               #+#    #+#             */
/*   Updated: 2022/02/10 10:37:08 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[10];
int	g_len;

void	ft_rec(int value, int i)
{
	if (i == g_len)
	{
		write(1, g_arr, g_len);
		if(g_arr[0] == 10 - g_len + '0')
			return ;
		write(1, ", ", 2);
		return;
	}
	while (value <= 10 + i - g_len)
	{
		g_arr[i] = value + '0';
		ft_rec(++value, i + 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	
	g_len = n;
	i = 0;
	while (i <= 10 - n)
	{
		g_arr[0] = i + '0';
		ft_rec(++i, 1);
	}
}

int	main()
{
	ft_print_combn(1);
}
