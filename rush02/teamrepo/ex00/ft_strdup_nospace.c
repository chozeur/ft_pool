/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_nospace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:01:18 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/31 15:01:21 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	ft_strdup_nospace_two(char *dest, char *str, int *i, int *j)
{
	int	end_spaces;

	while (str[*i] && str[*i] != '\n')
	{
		end_spaces = 0;
		while (str[*i] && ft_is_printable(str[*i])
			&& (!(ft_is_space(str[*i])))
			&& str[*i] != '\n')
			dest[(*j)++] = str[(*i)++];
		while (str[*i] && ft_is_space(str[*i]) && str[*i] != '\n')
		{
			dest[(*j)++] = str[(*i)++];
			end_spaces++;
		}
	}
	*j -= end_spaces;
	if (str[(*i)++] == '\n')
		dest[(*j)++] = '\n';
}

void	ft_strdup_nospace(char *dest, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_is_digit(str[i]))
			dest[j++] = str[i++];
		while (str[i] && ft_is_space(str[i]))
			i++;
		if (str[i] == ':')
			dest[j++] = str[i++];
		while (str[i] && ft_is_space(str[i]))
			i++;
		ft_strdup_nospace_two(dest, str, &i, &j);
	}
	dest[ft_strlen_nospace(str)] = '\0';
}
