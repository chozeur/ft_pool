/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:14 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/21 21:00:12 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	char	**sorted_argv;
	char	*swap;
	int	j;

	i = 1;
	j = 1;
	sorted_argv = argv;
	while(i < argc - 1)
	{
		if (ft_strcmp(sorted_argv[i], sorted_argv[i + 1]) > 0)
		{
			swap = sorted_argv[i];
			sorted_argv[i] = sorted_argv[i + 1];
			sorted_argv[i + 1] = swap;
			i = 0;
		}
		else 
			i++;
	}
	while (sorted_argv[j])
	{
		ft_putstr(sorted_argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
