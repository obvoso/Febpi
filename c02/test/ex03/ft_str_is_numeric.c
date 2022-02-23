/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:49:38 by soo               #+#    #+#             */
/*   Updated: 2022/02/10 09:24:27 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{	
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		++str;
	}
	return (1);
}
