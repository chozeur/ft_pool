/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_2_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:09:53 by rsung             #+#    #+#             */
/*   Updated: 2021/10/23 18:37:48 by rsung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_col_42_24(char **tab)
{
	int	i;

	i = 0;
	while (tab[0][i] != '\0')
	{
		if (tab[0][i] == '4' && tab[5][i] == '2')
		{
			tab[4][i] = '3';
		}
		if (tab[0][i] == '2' && tab[5][i] == '4')
		{
			tab[1][i] = '3';
		}
		i++;
	}
	i = 0;
}

void	ft_row_42_24(char **tab)
{
	int	i;

	i = 0;
	while (tab[i][0] != '\0')
	{
		if (tab[i][0] == '4' && tab[i][5] == '2')
		{
			tab[i][4] = '3';
		}
		if (tab[i][0] == '2' && tab[i][5] == '4')
		{
			tab[i][1] = '3';
		}
		i++;
	}
}
