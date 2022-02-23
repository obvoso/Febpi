/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:58:11 by soo               #+#    #+#             */
/*   Updated: 2022/02/06 14:20:39 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/rush00.c"

void	rush (int a, int b);

int  ft_atoi(char **argv, int *n1, int *n2)
{
	if (*argv[0] == '-')
		return (0);
	else
	{
		n1 = (*argv[0]
}

int	main(int argc, char **argv)
{	
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;

	ft_atoi(argv, &n1, &n2);
	rush(5, 5);
	return (0);
}

