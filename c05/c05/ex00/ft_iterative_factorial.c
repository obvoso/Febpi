/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:10:29 by soo               #+#    #+#             */
/*   Updated: 2022/02/15 09:30:55 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;
	int	i;

	ret = 1;
	i = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb)
		ret *= ++i;
	return (ret);
}
