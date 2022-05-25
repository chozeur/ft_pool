/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_million.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:44:18 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 22:49:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	resolve_million(char ***dict, char *arg, int *i, int *len)
{
	while (arg[*i] == '0')
		*i += 1;
	resolve_hundred(dict, arg, i, len);
	if (*len == 6 || (*len == 7 && arg[1] != '0'))
		ft_putstr(" million ");
	resolve_thousand(dict, arg, i, len);
}
