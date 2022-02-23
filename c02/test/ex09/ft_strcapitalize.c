/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:15:26 by soo               #+#    #+#             */
/*   Updated: 2022/02/09 21:22:17 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (is_lower(str[i]))
	{
		str[i] -= 32;
		++i;
	}
	while (str[i])
	{
		j = i - 1;
		if (is_lower(str[i]))
		{
			if (! (is_upper(str[j]) || is_lower(str[j]) || is_num(str[j])))
				str[i] -= 32;
		}
		else if (is_upper(str[i]))
		{
			if (is_upper(str[j]) || is_lower(str[j]) || is_num(str[j]))
				str[i] += 32;
		}
		++i;
	}
	return (str);
}
