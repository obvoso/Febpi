/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:14:00 by soo               #+#    #+#             */
/*   Updated: 2022/02/17 11:24:49 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*ret;
	unsigned int	i;
	unsigned int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * len);
	if (!ret)
		return (0);
	while (min < max)
		ret[i++] = min++;
	return (ret);
}
