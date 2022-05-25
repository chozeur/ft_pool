/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:27:08 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/26 13:08:25 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (!nb)
		return (0);
	while (i < nb + 1)
	{
		result = result * i;
		i++;
	}
	return (result);
}
