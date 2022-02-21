/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:40:28 by soo               #+#    #+#             */
/*   Updated: 2022/02/21 21:45:05 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

#include <unistd.h>
#include <stdlib.h>
#include "op.h"

int 	is_valid(char c);
int 	check_ops(int a, int b, char op, int(*f)(int, int));
void	ft_putchar(char c);
char	ft_putnbr(int n);
int		ft_atoi(char *str);
int		sep_op(char op);
int		init(int *op, in i);

#endif
