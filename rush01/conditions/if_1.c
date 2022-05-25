/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:03:57 by rsung             #+#    #+#             */
/*   Updated: 2021/10/24 15:32:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_col_up_1(int grid[4][4], char **argv)
{
	int	i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '1')
		{
			grid[0][j] = 4;
		}
        j++;
		i++;
	}
}

void	ft_col_down_1(int grid[4][4], char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '1')
		{
			tab[4][i] = '4';
		}
		i++;
	}
}

void	ft_row_left_1(int grid[4][4], char **argv)
{
	int i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '1')
		{
			grid[j][0] = 4;
		}
        j++;
		i++;
	}
}

void	ft_row_right_1(int grid[4][4], char **argv)
{
	int	i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '1')
		{
			grid[j][3] = 4;
		}
        j++;
		i++;
	}
}
