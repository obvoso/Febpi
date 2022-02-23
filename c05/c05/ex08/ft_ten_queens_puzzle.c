/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:24:57 by soo               #+#    #+#             */
/*   Updated: 2022/02/15 19:17:11 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(int n, char *ret)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (ret[i] == ret[n])
			return (0);
		if ((i - n == ret[i] - ret[n]) || (i - n == ret[n] - ret[i]))
			return (0);
		++i;
	}
	return (1);
}

void	recur(int idx, char *ret, int *cnt)
{
	if (idx == 10)
	{
		++*cnt;
		write(1, ret, 11);
		return ;
	}
	ret[idx] = '0';
	while (ret[idx] <= '9')
	{
		if (is_valid(idx, ret))
			recur(idx + 1, ret, cnt);
		++ret[idx];
	}
}

int	ft_ten_queens_puzzle(void)
{	
	char	ret[11];
	int		cnt;

	ret[10] = '\n';
	cnt = 0;
	recur(0, ret, &cnt);
	return (cnt);
}
