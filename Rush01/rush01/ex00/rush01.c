/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:10:12 by soo               #+#    #+#             */
/*   Updated: 2022/02/13 21:33:02 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init(int result[4][4]);
void	ft_putchar(char c);
int		except(int argc, char *argv[]);
void	print_result(int result[4][4]);
int		check_top(int b, int result[4][4]);
int		check_bottom(int b, int result[4][4]);
int		check_left(int a, int result[4][4]);
int		check_right(int a, int result[4][4]);
int		check_col(int b, int result[4][4]);
int		check_row(int a, int result[4][4]);

void	init(int result[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			result[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(int result[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(result[i][j] + 48);
			if (j == 3)
				break ;
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	except(int argc, char *argv[])
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (argc != 2 || argv[1][0] == '\0')
		return (0);
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0 && argv[1][i] >= '1' && argv[1][i] <= '4')
			;
		else if (i % 2 == 1 && argv[1][i] == ' ')
			;
		else
			return (0);
		n++;
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	result[4][4];
	int	input_col[4][2];
	int	input_row[4][2];

	if (!except(argc, argv))
	{
		write(1, "Argument Error\n", 15);
		return (1);
	}
	init(result);
	j = 0;
	i = 0;
	while (i != 4)
	{
		input_row[i][0] = argv[1][j] - 48;
		input_row[i][1] = argv[1][j + 8] - 48;
		input_col[i][0] = argv[1][j + 16] - 48;
		input_col[i][1] = argv[1][j + 24] - 48;
		j = j + 2;
		i++;
	}
	return (0);
}
