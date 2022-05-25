/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-los <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 06:43:04 by side-los          #+#    #+#             */
/*   Updated: 2021/10/17 10:17:08 by side-los         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
#include <stdio.h>
void	ft_up(int x)
{
	if(x >= 1)
		ft_putchar ('o');
	while(--x > 1)
		ft_putchar ('-');
	if(x == 1)
		ft_putchar ('o');
}
void	ft_middle(int x, int y)
{
	while(--y > 1)
	{
		ft_putchar ('\n');
		ft_putchar ('|');
		while(--x > 1)
			ft_putchar (' ');
		if (x >= x-1)
			ft_putchar ('|');
	}
}
void	ft_last(int x , int y)
{
	if(y != 1)
	{
		ft_putchar ('\n');
		ft_putchar ('o');
	}
	while(--x > 1)
		ft_putchar ('-');
	if (x == 1)
	{
		ft_putchar ('o');
		ft_putchar ('\n');
	}
}
void	rush(int x, int y)
{
	int x_init;

		x_init = x;
	if (x >= 1)
	{
		if(y >= 1)
		{
		ft_up(x);
		x_init = x;
		ft_middle(x, y);
		x = x_init;
		ft_last(x,y);
		}
	}
}
