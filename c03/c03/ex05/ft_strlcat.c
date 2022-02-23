/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:21:39 by soo               #+#    #+#             */
/*   Updated: 2022/02/13 09:34:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_get_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_i;
	unsigned int	s_i;

	d_i = ft_get_len(dest);
	s_i = 0;
	if (size > d_i)
	{
		while (src[s_i] && s_i < size - d_i - 1)
		{
			dest[d_i + s_i] = src[s_i];
			++s_i;
		}
		dest[d_i + s_i] = 0;
		s_i += ft_get_len(&src[s_i]);
		return (d_i + s_i);
	}
	else
		return (ft_get_len(src) + size);
}
