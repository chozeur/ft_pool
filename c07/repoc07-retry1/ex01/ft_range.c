/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:13:51 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/01 21:37:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = (max - min);
	tab = malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
