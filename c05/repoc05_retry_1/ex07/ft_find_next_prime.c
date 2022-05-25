/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:29:45 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/27 16:58:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0 && i != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nprime;

	nprime = 0;
	if (ft_is_prime(nb) == 1)
		nprime = nb;
	else
	{
		nprime = nb;
		while (ft_is_prime(nprime) != 1)
			nprime++;
	}
	return (nprime);
}
