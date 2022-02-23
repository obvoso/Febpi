/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:40:36 by soo               #+#    #+#             */
/*   Updated: 2022/02/15 21:50:32 by soo              ###   ########.fr       */
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
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	++argv;
	while (*argv)
	{
		put_str(*argv);
		write(1, "\n", 1);
		++argv;
	}
	return (0);
}
