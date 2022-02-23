/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:46:16 by soo               #+#    #+#             */
/*   Updated: 2022/02/15 20:00:32 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	m;

	//nb = (long long)nb;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	m = 2;
	while (m * m < nb) {
		if (m * m < 0 ) {
			printf("%d\n", m);
			return (0);
		}
		++m;
	}
	if (m * m == nb)
		return (m);
	return (0);
}

int main(void)
{
	ft_sqrt(2147483647);
}
