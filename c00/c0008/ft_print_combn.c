/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:28:52 by soo               #+#    #+#             */
/*   Updated: 2022/02/09 17:31:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[10];
int	g_len;

void	ft_recur(int i, int n) 
{
	if (n == g_len)
	{	
		if(g_arr[0] == 10 - g_len + '0')
		{
			write(1, g_arr, g_len);
			return ;
		}	
		write(1, g_arr, g_len);
		write(1, ", ", 2);
		return ;
	}
	while (i <= 10 + n - g_len)
	{
		g_arr[n] = i + '0';
		ft_recur(++i, n + 1);
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
		ft_recur(++i, 1);
	}
}

int main ()
{
	ft_print_combn(2);
}
