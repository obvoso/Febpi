/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:40:28 by soo               #+#    #+#             */
/*   Updated: 2022/02/22 14:09:13 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <unistd.h>
# include "op.h"

int		is_valid(char c);
void	check_ops(int a, int b, int(*f[])(int, int), int i);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		sep_op(char op);
int		main(int argc, char **argv);

#endif
