/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:22:51 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/29 14:09:09 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_base_single_char(char *base)
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

int	ft_is_base_valid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		else
			i++;
	}
	if (ft_is_base_single_char(base) == 0)
		return (0);
	if (ft_strlen(base) < 2)
		return (0);
	return (1);
}

int	ft_is_char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	if (ft_is_base_valid(base) == 0)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_is_char_in_base(str[i], base) != -1)
	{
		result = (result * ft_strlen(base))
			+ (ft_is_char_in_base(str[i], base));
		i++;
	}
	return (result * sign);
}
