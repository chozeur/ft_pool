/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:18:13 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/25 19:42:02 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
