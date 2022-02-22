/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:39:48 by soo               #+#    #+#             */
/*   Updated: 2022/02/22 14:07:54 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		is_valid(char c);
void	check_ops(int a, int b, int(*f[])(int, int), int i);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		sep_op(char op);
void	init(int *fp, int i);
int		main(int argc, char **argv);

int	is_valid(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

void	check_ops(int a, int b, int(*f[])(int, int), int i)
{
	int	ret;

	if (b == 0)
	{
		if (i == 3 || i == 4)
		{
			if (i == 3)
				write(1, "Stop : division by zero", 23);
			if (i == 4)
				write(1, "Stop : modulo by zero", 21);
			return ;
		}
	}
	ret = f[i](a, b);
	if (ret >= 0)
		ft_putnbr(ret);
	else if (f[i](a, b) == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_putchar('-');
		ft_putnbr(-ret);
	}
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
		return (3);
	else if (op == '%')
		return (4);
	else
		return (5);
}

int	main(int argc, char **argv)
{
	int	(*fp[5])(int, int);

	fp[0] = ft_add;
	fp[1] = ft_min;
	fp[2] = ft_mul;
	fp[3] = ft_div;
	fp[4] = ft_mod;
	if (argc != 4)
		return (0);
	if (is_valid(*argv[2]))
	{
		check_ops(ft_atoi(argv[1]), ft_atoi(argv[3]), fp, sep_op(*argv[2]));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
