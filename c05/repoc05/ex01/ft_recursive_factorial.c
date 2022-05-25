/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:13:20 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/26 13:21:36 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
