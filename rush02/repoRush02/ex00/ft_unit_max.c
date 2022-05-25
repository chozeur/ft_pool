/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:08:21 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/30 18:36:20 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_unit_max(char *str) retourne la grandeur de str  
*  j = 1 -> centaine
*  j = 2 -> millier
*  j = 3 -> million
*  j = 4 -> milliard
*/

int	ft_unit_max(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] && str[i] == '0')
		str++;
	while (str[i])
	{
		if (i % 3 == 0 && i != 0)
			j++;
		i++;
	}
	return (j);
}
