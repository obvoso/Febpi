/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:15:26 by soo               #+#    #+#             */
/*   Updated: 2022/02/21 14:32:59 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*fp;
	int	i;

	fp = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		fp[i] = f(tab[i]);
		++i;
	}
	return (fp);
}
