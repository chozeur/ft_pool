/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:40:27 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/14 13:08:21 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_all(char a, char b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	ft_putchar(' ');
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a != b && a < b)
			{
				ft_print_all(a, b);
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		b = 0;
		a++;
	}
}
