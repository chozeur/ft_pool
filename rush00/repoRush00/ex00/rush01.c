/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:29:54 by aberaud           #+#    #+#             */
/*   Updated: 2021/10/17 16:19:57 by aberaud          ###   ########.fr       */
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
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_inter(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('*');
		else if (i == x)
			ft_putchar('*');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	ft_last(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('*');
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
			ft_prim(x);
		else if (j >= 2 && j < y)
			ft_inter(x);
		else if (j == y)
			ft_last(x);
		j++;
	}
}
