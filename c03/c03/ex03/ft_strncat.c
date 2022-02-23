/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:22:11 by soo               #+#    #+#             */
/*   Updated: 2022/02/12 08:35:26 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_i;
	unsigned int	s_i;

	d_i = 0;
	s_i = 0;
	while (dest[d_i])
		++d_i;
	while (s_i < nb && src[s_i])
	{
		dest[d_i] = src[s_i];
		++d_i;
		++s_i;
	}
	dest[d_i] = 0;
	return (dest);
}
