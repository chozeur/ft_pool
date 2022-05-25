/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:29:00 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/02 16:56:23 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	 int	i;
	 int	len;
	char	*dup;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*final_tab;
	int			i;

	i = 0;
	final_tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (final_tab == NULL)
		return (NULL);
	while (i < ac)
	{
		final_tab[i].size = ft_strlen(av[i]);
		final_tab[i].str = av[i];
		final_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	final_tab[i].str = 0;
	return (final_tab);
}
