/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:18:26 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 19:12:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_print_grid(int **grid, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j =0;
		while (j < size)
		{
			ft_putchar('|');
			ft_putnbr(grid[i][j]);
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
