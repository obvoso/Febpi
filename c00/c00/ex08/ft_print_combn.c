/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:17:20 by soo               #+#    #+#             */
/*   Updated: 2022/02/06 15:46:29 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_arr[10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
}

void	ft_increase(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (10 == arr[i])
			break ;
		++i;
	}
	if (i == n)
	{
		++arr[n - 1];
		return ;
	}
	else
	{
		arr[i - 1] += 1;
		while (i < n)
		{
			arr[i] = arr[i - 1] + 1;
			++i;
		}
	}
}

int	ft_init(int *arr, int n)
{
	int	i;

	i = 0;
	if (0 < n && n < 10)
	{
		while (i < n)
		{
			arr[i] = i;
			++i;
		}
		return (1);
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	flag;

	flag = ft_init(g_arr, n);
	while (g_arr[0] <= 10 - n)
	{
		if (flag)
		{
			ft_put_arr(g_arr, n);
			flag = 0;
		}
		else if (g_arr[n - 1] < 10)
		{
			write(1, ", ", 2);
			ft_put_arr(g_arr, n);
		}
		ft_increase(g_arr, n);
	}
}
