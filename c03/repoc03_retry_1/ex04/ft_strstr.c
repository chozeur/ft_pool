/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:40:27 by flo               #+#    #+#             */
/*   Updated: 2021/10/26 12:59:12 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			while (to_find[j] == str[i + j] && str[i + j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			while (to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i - j]);
				else if (to_find[j] != str[i])
					break ;
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
//	char str[] = "just look at it";
//	char find[] = "check";
	(void)ac;
	printf("return : %s addr : %p\n", ft_strstr(av[1], av[2]), ft_strstr(av[1], av[2]));
	printf("return : %s addr : %p\n", strstr(av[1], av[2]), strstr(av[1], av[2]));
	return (0);
}
