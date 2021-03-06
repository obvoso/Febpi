/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:06:40 by soo               #+#    #+#             */
/*   Updated: 2022/02/09 20:31:34 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 != 0 && *s2 != 0)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
