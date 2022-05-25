/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_thousand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 23:16:54 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 23:16:57 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	resolve_thousand(char ***dict, char *arg, int *i, int *len)
{
	while (arg[*i] == '0')
		*i += 1;
	resolve_hundred(dict, arg, i, len);
	if (*len >= 4 && arg[*len - *i] != '0')
		ft_putstr(" thousand ");
	resolve_hundred(dict, arg, i, len);
}
