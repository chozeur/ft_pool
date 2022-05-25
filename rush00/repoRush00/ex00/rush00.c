/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:07:48 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/17 16:20:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('-');
		i++;
	}
}

void	ft_side(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
			ft_line(x);
		else if (j >= 2 && j < y)
			ft_side(x);
		else if (j == y)
			ft_line(x);
		j++;
	}
}
