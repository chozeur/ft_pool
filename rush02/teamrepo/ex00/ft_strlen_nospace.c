/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_nospace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:49:12 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/30 22:49:15 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	ft_strlen_nospace_two(char *str, int *i, int *len)
{
	int	end_spaces;

	while (str[*i] && str[*i] != '\n')
	{
		end_spaces = 0;
		while (str[*i] && ft_is_printable(str[*i])
			&& (!(ft_is_space(str[*i]))) && str[*i] != '\n')
		{
			*i += 1;
			*len += 1;
		}
		while (str[*i] && ft_is_space(str[*i]) && str[*i] != '\n')
		{
			*i += 1;
			*len += 1;
			end_spaces++;
		}
	}
	*len -= (end_spaces - 1);
	*i += 1;
}

int	ft_strlen_nospace(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && ft_is_digit(str[i]))
		{
			i++;
			len++;
		}
		while (str[i] && ft_is_space(str[i]))
			i++;
		if (str[i] == ':')
		{
			i++;
			len++;
		}
		while (str[i] && ft_is_space(str[i]))
			i++;
		ft_strlen_nospace_two(str, &i, &len);
	}
	return (len);
}
