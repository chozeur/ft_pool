/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:31:43 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 15:58:46 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"
/*----------------------------------------------------------------------------*/
void	ft_grid_init(char **grid, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = ' ';
			j ++;
		}
		i ++;
	}
}
/*----------------------------------------------------------------------------*/
char	**ft_set_grid(char col1up, char col2up, char col3up, char col4up,
		char col1down, char col2down, char col3down, char col4down,
		char row1left, char row2left, char row3left, char row4left,
		char row1right, char row2right, char row3right, char row4right)
{
	char	grid[6][6];

	ft_grid_init(grid, 6);
	grid[0][1] = col1up ;
	grid[0][2] =  col2up;
	grid[0][3] =  col3up;
	grid[0][4] =  col4up;
	grid[1][5] =  row1right;
	grid[2][5] =  row2right;
	grid[3][5] =  row3right;
	grid[4][5] =  row4right;
	grid[5][4] =  col4down;
	grid[5][3] =  col3down;
	grid[5][2] =  col2down;
	grid[5][1] =  col1down;
	grid[4][0] =  row4left;
	grid[3][0] =  row3left;
	grid[2][0] =  row2left;
	grid[1][0] =  row1left;
}
