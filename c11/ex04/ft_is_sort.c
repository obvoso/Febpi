/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:15 by soo               #+#    #+#             */
/*   Updated: 2022/02/22 14:32:23 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sort(int	*tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		++i;
	}
	return (1);
}

int	is_rev_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_is_sort(int	*tab, int length, int(*f)(int, int))
{
	if (!length)
		return (0);
	if (!is_sort(tab, length, f) && !is_rev_sort(tab, length, f))
		return (0);
	return (1);
}
