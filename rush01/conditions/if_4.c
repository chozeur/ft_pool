/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:21:03 by rsung             #+#    #+#             */
/*   Updated: 2021/10/24 15:18:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_col_up_4(int grid[4][4], char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '4')
		{
			grid[0][j] = 1;
			grid[1][j] = 2;
			grid[2][j] = 3;
			grid[3][j] = 4;
		}
		i++;
		j++;
	}
}

void	ft_col_down_4(char **tab)
{
	int	i;

	i = 0;
	while (tab[5][i] != '\0')
	{
		if (tab[5][i] == '4')
		{
			tab[1][i] = '4';
			tab[2][i] = '3';
			tab[3][i] = '2';
			tab[4][i] = '1';
		}
		i++;
	}
}

void	ft_row_left_4(int grid[4][4], char **argv)
{
	int	i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '4')
		{
			grid[j][0] = 1;
			grid[j][1] = 2;
			grid[j][2] = 3;
			grid[j][3] = 4;
		}
        j++;
		i++;
	}
}

void	ft_row_right_4(int grid[4][4], char **argv)
{
	int	i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '4')
		{
			grid[j][0] = 4;
			grid[j][1] = 3;
			grid[j][2] = 2;
			grid[j][3] = 1;
		}
        j++;
		i++;
	}
}
