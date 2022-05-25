/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:19:14 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/26 18:50:09 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	j;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = (max - min);
	tab = malloc(sizeof(int) * len);
	if (!(tab))
		return (-1);
	j = 0;
	while (min < max)
	{
		tab[j] = min;
		j++;
		min++;
	}
	*range = tab;
	return (len);
}
