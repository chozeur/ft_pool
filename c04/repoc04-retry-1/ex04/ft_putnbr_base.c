/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:37:49 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/29 14:08:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_is_single_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			else
				j++;
		}	
		i++;
	}
	return (1);
}

int	ft_base_is_operator(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] != '-' && base[i] != '+')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_valid_base(char *base)
{
	if (ft_strlen(base) < 2)
		return (0);
	else if (ft_base_is_single_char(base) == 0)
		return (0);
	else if (ft_base_is_operator(base) == 0)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	base_len;
	long long	fnb;

	fnb = nbr;
	base_len = ft_strlen(base);
	if (ft_valid_base(base) == 0)
		return ;
	if (fnb < 0)
	{
		write(1, "-", 1);
		fnb *= -1;
	}
	if (fnb >= base_len)
	{
		ft_putnbr_base(fnb / base_len, base);
		ft_putnbr_base(fnb % base_len, base);
	}
	else
		write(1, &base[fnb % base_len], 1);
}
