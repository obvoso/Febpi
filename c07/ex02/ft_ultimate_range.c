/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:33:43 by soo               #+#    #+#             */
/*   Updated: 2022/02/16 20:57:17 by soo              ###   ########.fr       */
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
		return (NULL);
	ret = (int *)malloc(sizeof(int) * len);
	while (min < max)
		ret[i++] = min++;
	return (ret);
}

int	ft_ultimate_range(int **range, int min, int max)
{	
	unsigned int	len;

	len = max - min;
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	if (min >= max)
		return (NULL);
	return (len);
}
