/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:27:08 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/27 17:13:23 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
