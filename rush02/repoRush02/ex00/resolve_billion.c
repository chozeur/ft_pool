/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_billion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:55:06 by chilee            #+#    #+#             */
/*   Updated: 2021/10/31 22:55:10 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	resolve_billion(char ***dict, char *arg, int *i, int *len)
{
	char	*letter;

	letter = find_char_in_dict(dict, arg[0]);
	ft_putstr(letter);
	ft_putstr(" billion");
	(*i)++;
	resolve_million(dict, arg, i, len);
}
