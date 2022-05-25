/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:37:49 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/21 21:05:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	while(base[i])
	{
		if (base[i] != '-' && base[i] != '+')
			i++;
		else
			return (0);
	}
	return (1);
}
/*--------------------------------------------------------------------*/
void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return;
	if (ft_base_is_single_char(base) == 0)
		return;
	if (ft_base_is_operator(base) == 0)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
/*--------------------------------------------------------------------*/
int	main()
{
	char	base[] = "01";
	int	nbr = -420;

	ft_putnbr_base(nbr, base);
	return 0;
}
