/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:30:41 by soo               #+#    #+#             */
/*   Updated: 2022/02/10 21:19:31 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_check(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
		++i;
	if (i > n)
		return (1);
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (is_check(s1, s2, n))
	{
		while (i < n)
		{
			if (! (s1[i] == s2[i] && s1[i] && s2[i]))
				break ;
			++i;
		}
	}
	else
	{
		while (s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				break ;
			++i;
		}
	}
	return (s1[i] - s2[i]);
}
