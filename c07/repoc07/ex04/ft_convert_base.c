/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:22:25 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/01 17:18:38 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_is_base_valid(char *base);
int	ft_atoi_base(char *str, char *base);

void	ft_convert_base_supply(int nbr, char *base, char *result, int i)
{
	long long	base_len;
	long long	fnb;

	fnb = nbr;
	base_len = ft_strlen(base);
	if (ft_is_base_valid(base) == 0)
		return ;
	if (fnb < 0)
	{
		result[0] = '-';
		fnb *= -1;
	}
	if (fnb >= base_len)
	{
		ft_convert_base_supply(fnb / base_len, base, result, i);
		ft_convert_base_supply(fnb % base_len, base, result, i);
	}
	else
	{
		result[i] = base[fnb % base_len];
		i--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	 int	nb;
	 int	tmp;
	char	*result;
	 int	i;
	 int	base_to_len;

	base_to_len = ft_strlen(base_to);
	i = 0;
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
		i += 1;
	tmp = nb;
	while (tmp != 0 && ++i)
		tmp = tmp / base_to_len;
	tmp = nb;
	result = (char *)malloc(sizeof(char) * (i + 1));
	result[i] = '\0';
	ft_convert_base_supply(tmp, base_to, result, i);
	return (result);
}
