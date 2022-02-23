/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:18:55 by soo               #+#    #+#             */
/*   Updated: 2022/02/16 13:32:58 by soo              ###   ########.fr       */
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

int	str_cmp(char *str1, char *str2)
{
	while (*str1 && *str2 && (*str1 == *str2))
	{
		++str1;
		++str2;
	}
	return (*str1 - *str2);
}

char	**str_swap(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (str_cmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			++j;
		}
		++i;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	argv = str_swap(argc, argv);
	while (*++argv)
		put_str(*argv);
	return (0);
}
