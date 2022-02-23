/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:50:50 by soo               #+#    #+#             */
/*   Updated: 2022/02/16 09:19:27 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	while (--argc > 0)
		put_str(argv[argc]);
	return (0);
}
