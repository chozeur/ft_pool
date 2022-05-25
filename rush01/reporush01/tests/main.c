/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:25:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 19:14:35 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush01.h"

int	main(int argc, char **argv)
{
	int	grid[6][6];
	int	col1up;
	int	col2up;
	int	col3up;
	int	col4up;
	int	col1down;
	int	col2down;
	int	col3down;
	int	col4down;
	int	row1left;
	int	row2left;
	int	row3left;
	int	row4left;
	int	row1right;
	int	row2right;
	int	row3right;
	int	row4right;

	col1up = ft_char_to_int(argv[1][0]);
	col2up = ft_char_to_int(argv[1][2]);
	col3up = ft_char_to_int(argv[1][4]);
	col4up = ft_char_to_int(argv[1][6]);
	col1down = ft_char_to_int(argv[1][8]);
	col2down = ft_char_to_int(argv[1][10]);
	col3down = ft_char_to_int(argv[1][12]);
	col4down = ft_char_to_int(argv[1][14]);
	row1left = ft_char_to_int(argv[1][16]);
	row2left = ft_char_to_int(argv[1][18]);
	row3left = ft_char_to_int(argv[1][20]);
	row4left = ft_char_to_int(argv[1][22]);
	row1right = ft_char_to_int(argv[1][24]);
	row2right = ft_char_to_int(argv[1][26]);
	row3right = ft_char_to_int(argv[1][28]);
	row4right = ft_char_to_int(argv[1][30]);
	if (argc != 2)
	{
		write(1, "Error", 4);
		ft_putchar('\n');
		return (-1);
	}
	ft_set_grid(*grid, col1up, col2up, col3up, col4up, col1down, col2down,
				col3down, col4down, row1left, row2left, row3left, row4left,
				row1right, row2right, row3right, row4right);
	ft_print_grid(grid, 6);
	return (0);
}
