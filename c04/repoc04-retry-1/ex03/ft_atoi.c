/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:14:10 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/24 18:47:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_is_white_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + ((str[i] - 48) % 10);
		i++;
	}
	return (result * sign);
}
