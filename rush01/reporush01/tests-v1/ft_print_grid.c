/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:18:26 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 15:58:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_print_grid(char **grid, int size)
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
			ft_putchr('|');
			ft_putchar(grid[i][j]);
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
