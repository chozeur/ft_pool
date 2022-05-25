/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:40:53 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 22:51:35 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	resolve_rush(char ***dict, char *arg)
{
	 int	unit_max;
	char	*arg_parsed;
	 int	i;
	 int	nbr_len;

	i = 0;
	unit_max = ft_unit_max(arg);
	arg_parsed = (char *)malloc(sizeof(char *) * 11);
	if (arg_parsed == NULL)
		return ;
	ft_strdup_zero(arg_parsed, arg);
	nbr_len = ft_strlen(arg_parsed);
	if (unit_max == 4)
		resolve_billion(dict, arg_parsed, &i, &nbr_len);
	else if (unit_max == 3)
		resolve_million(dict, arg_parsed, &i, &nbr_len);
	else if (unit_max == 2)
		resolve_thousand(dict, arg_parsed, &i, &nbr_len);
	else
		resolve_hundred(dict, arg_parsed, &i, &nbr_len);
}
