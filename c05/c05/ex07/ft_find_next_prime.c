/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:30:19 by soo               #+#    #+#             */
/*   Updated: 2022/02/14 21:24:18 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long long	m;
	int			flag;

	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while (nb)
	{
		m = 2;
		flag = 0;
		while (m * m <= nb)
		{
			if (nb % m == 0)
			{
				flag = 1;
				break ;
			}
			++m;
		}
		if (flag == 0)
			return (nb);
		++nb;
	}
	return (0);
}
