/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:30:05 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/24 18:00:43 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	set_grid_1(int grid[4][4]);
void	set_grid_2(int grid[4][4]);
void	set_grid_3(int grid[4][4]);
void	set_grid_4(int grid[4][4]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];

	set_grid_1(grid);
	set_grid_2(grid);
	set_grid_3(grid);
	set_grid_4(grid);
	if (argc > 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	else if (argv[1][0] != '4')
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	else
		print_grid(grid);
	return (0);
}
