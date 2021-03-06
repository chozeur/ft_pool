/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_char_in_dict.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:46:54 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 22:46:56 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

char	*find_char_in_dict(char **dict[], char nb)
{
	int	i;

	i = 0;
	while (dict[i][0])
	{
		if (dict[i][0][0] == nb && dict[i][0][1] == '\0')
			return (dict[i][1]);
		i++;
	}
	return (0);
}
