/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:00:54 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/16 23:34:12 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_prim(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('B');
		i++;
	}
	i = 1;
}

void	ft_inter(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('B');
		else if (i == x)
			ft_putchar('B');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
	i = 1;
}

void	ft_last(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('B');
		i++;
	}
	i = 1;
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			ft_prim(x);
			j++;
		}
		else if (j >= 2 && j < y)
		{
			ft_inter(x);
			j++;
		}
		else if (j == y)
		{
			ft_last(x);
			j++;
		}
	}
}
