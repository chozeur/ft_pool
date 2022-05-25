/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_usint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:43:06 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/30 22:40:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* ft_atoi_usint(char *str) transforme str en unsigned int
*  return (-1) -> nombre negatif passe en parametre
*  return (-2) -> nombre passe en parametre incompatible avec le type de
* retour attendu
*/

long long	ft_atoi_usint(char *str)
{
	      int	i;
	long long	temp;

	i = 0;
	temp = -1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		temp = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = (temp * 10) + (str[i] - 48);
		i++;
	}
	if (temp > 4294967295 || temp < 0)
		return (-1);
	else
		return (temp);
}
