/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_open_read.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:49:52 by soo               #+#    #+#             */
/*   Updated: 2022/02/20 20:07:13 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

char	*ft_dict_open_read(void)
{
	int		fd;
	char	*buf;
	int		size;

	buf = (char *)malloc(sizeof(char) * 1024);
	if (!buf)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}

	if ((
				size = read(fd, buf, 1024))
			== -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	close(fd);
	return (buf);
}
