/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:59:34 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 23:10:32 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

void	resolve_hundred_s2(char ***dict, char *arg, int *i, int *len)
{
	char	*letter;

	if (arg[*i] == '1')
	{
		letter = find_in_dict(dict, arg[*i], arg[*i + 1]);
		*i += 1;
		*len -= 2;
		ft_putstr(letter);
		if (arg[*i + 1] != '0')
			ft_putchar(' ');
	}
	else if (arg[*i] != '0')
	{
		letter = find_in_dict(dict, arg[*i], '0');
		ft_putstr(letter);
		letter = find_char_in_dict(dict, arg[*i + 1]);
		ft_putchar(' ');
		ft_putstr(letter);
		*len -= 2;
		*i += 1;
	}
	else
		*len -= 1;
	*i += 1;
}

void	resolve_hundred_s1(char ***dict, char *arg, int *i, int *len)
{
	ft_putstr(find_char_in_dict(dict, arg[*i]));
	ft_putstr(" hundred ");
	*i += 1;
	*len -= 1;
}

void	resolve_hundred(char ***dict, char *arg, int *i, int *len)
{
	char	*letter;

	while (arg[*i] == '0')
	{
		*i += 1;
		*len -= 1;
	}
	if (*len % 3 == 0 && *len >= 3)
		resolve_hundred_s1(dict, arg, i, len);
	if (*len % 3 == 2)
		resolve_hundred_s2(dict, arg, i, len);
	if (*len % 3 == 1)
	{
		if (arg[*i] != '0')
		{
			letter = find_char_in_dict(dict, arg[*i]);
			*i += 1;
			*len -= 1;
			ft_putstr(letter);
		}
	}
}
