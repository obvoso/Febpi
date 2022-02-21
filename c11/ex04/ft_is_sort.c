/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:15 by soo               #+#    #+#             */
/*   Updated: 2022/02/21 18:37:37 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int	*tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	if (!length)
		return (0);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		++i;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
