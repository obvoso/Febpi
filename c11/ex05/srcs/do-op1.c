/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:39:48 by soo               #+#    #+#             */
/*   Updated: 2022/02/21 21:45:39 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	is_valid(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int	check_ops(int a, int b, char op, int(*f)(int, int))
{	
	int	*fp;

	if (op == '+')
		fp = add(a, b);
	else if (op == '-')
		fp = min(a, b);
	else if (op == '*')
		fp = mul(a, b);
	else if (op == '/')
	{
		if (b == 0)
		{
			write(1, "Stop : division by zero\n", 24); 
			return ;
		}
		fp = div(a, b);
	}
	else if (op == '%')
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
		fp = mod(a, b);
	}
	else
		write(1, "0", 1);
	return (fp);
}

void ft_putchar(char c)
{
	write(1, &c ,1);
}

char ft_putnbr (int n)
{
	if (nbr / 10)
		ft_putnbr(n / 10);
	ft_putchar(n + '0');
}

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

int	sep_op(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		reutnr (3);
	else if (op == '%')
		return (4);
	else
		write(1, "0\n", 2);
	return (5);
}

void init(int *op, int i)
{
	if (i == 0)
		op[0] = &add;
	if (i == 1)
		op[1] = &min;
	if (i == 2)
		op[2] = &mul;
	if (i == 3)
		op[3] = &div;
	if (i == 4)
		op[4] = &mod;
}

int	main(int argc, char **argv)
{
	int	(*fp)(int, int);

	if (argc != 4)
		return ;
	fp = (int *)malloc(sizeof(int) * 5);
	if (!fp)
		return (0);
	if (is_valid(*argv[2]))
	{
		init(fp, sep_op(*argv[2]));
		check_ops(ft_atoi(argv[1]), ft_atoi(argv[3], fp));
		if (*fp == -2147483648)
		{
			write(1, "-2147483648\n", 12);
			return ;
		}
		if (*fp > 0)
			ft_putnbr(-*fp);
		else 
			ft_putnbr(*fp);
		write(1, "\n", 1);
	}
	return (0);
}
