/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:04:13 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/18 17:43:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	j;

	j = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			x = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = x;
			j = 0;
		}
		else
			j++;
	}
}

int	main()
{
	int tab[5] = {0, 8, 6, 4, 1};
       	ft_sort_int_tab(tab, 5);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}
