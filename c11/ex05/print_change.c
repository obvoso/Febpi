/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_change.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:44:47 by soo               #+#    #+#             */
/*   Updated: 2022/02/23 13:06:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		is_valid(char *s);
void	check_ops(int a, int b, int(*f[])(int, int), int i);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		sep_op(char op);
void	init(int *fp, int i);

int	ft_atoi(char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	ret = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		++str;
	}
	return (ret * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
