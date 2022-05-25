/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:31:43 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 19:12:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*----------------------------------------------------------------------------*/
void	ft_grid_init(int **grid, int size)
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
			grid[i][j] = 0;
			j ++;
		}
		i ++;
	}
}
/*----------------------------------------------------------------------------*/
void	ft_set_grid(int **grid, int col1up, int col2up, int col3up, int col4up,
		int col1down, int col2down, int col3down, int col4down,
		int row1left, int row2left, int row3left, int row4left,
		int row1right, int row2right, int row3right, int row4right)
{
	ft_grid_init(grid, 6);
	grid[0][1] = col1up ;
	grid[0][2] = col2up;
	grid[0][3] = col3up;
	grid[0][4] = col4up;
	grid[1][5] = row1right;
	grid[2][5] = row2right;
	grid[3][5] = row3right;
	grid[4][5] = row4right;
	grid[5][4] = col4down;
	grid[5][3] = col3down;
	grid[5][2] = col2down;
	grid[5][1] = col1down;
	grid[4][0] = row4left;
	grid[3][0] = row3left;
	grid[2][0] = row2left;
	grid[1][0] = row1left;
}