/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:13:40 by soo               #+#    #+#             */
/*   Updated: 2022/02/10 10:08:45 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (len + 1 < size)
	{
		if (src[len])
		{
			dest[len] = src[len];
			++len;
		}
		else
			break ;
	}
	dest[len] = 0;
	while (src[len])
		++len;
	return (len);
}
