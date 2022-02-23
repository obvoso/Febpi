/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:28:11 by soo               #+#    #+#             */
/*   Updated: 2022/02/23 10:16:18 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
	{
		++len;
	}
	return (len);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		len;
	char	*tmp;

	len = get_len(tab);
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			++j;
		}
		++i;
	}
}
