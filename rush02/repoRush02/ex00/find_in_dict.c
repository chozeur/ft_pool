/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:46:40 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 22:46:42 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

char	*find_in_dict(char **dict[], char diz, char unit)
{
	int	i;

	i = 0;
	while (dict[i][0])
	{
		if (dict[i][0][0] == diz && dict[i][0][1] == unit
				&& dict[i][0][1] != '\0'
				&& dict[i][0][2] == '\0')
			return (dict[i][1]);
		i++;
	}
	return (0);
}
