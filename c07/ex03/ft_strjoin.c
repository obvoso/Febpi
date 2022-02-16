/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:57:55 by soo               #+#    #+#             */
/*   Updated: 2022/02/16 21:52:26 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_len(char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (strs[i][0])
	{
		j = 0;
		while (strs[i][j])
		{	
			++len;
			++j;
		}
		++i;
	}
	return (len);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char *ret;

	ret = (char *)malloc(get_len(strs) + size);
	if (size != 0)
	{

	}
	

}	

int main()
{
	char *strs[3];
	strs[0] = "AaAaA";
	strs[1] = "BbBbB";
	srrs[2] = "tlqkf";
	
	char *sep;
	sep = ", ";
	printf("%s\n", ft_strjoin(3, strs, sep));
}
