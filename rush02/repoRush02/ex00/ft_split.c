/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:00:40 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/31 14:57:56 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

int	ft_count_dots(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == ':')
			result++;
		i++;
	}
	return (result);
}

char	***ft_malloc(char *str)
{
	char	***result;
	 int	i;

	result = (char ***)malloc(sizeof(char **) * (ft_count_dots(str) + 2));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ft_count_dots(str) + 1)
	{
		result[i] = (char **)malloc(sizeof(char *) * 2);
		if (result == NULL)
			return (NULL);
		result[i][0] = (char *)malloc(sizeof(char) * 256);
		if (result[i][0] == NULL)
			return (NULL);
		result[i][1] = (char *)malloc(sizeof(char) * 256);
		if (result[i][1] == NULL)
			return (NULL);
		i++;
	}
	return (result);
}

char	***ft_split(char *str)
{
	char	***result;
	 int	i;
	 int	j;
	 int	k;

	result = ft_malloc(str);
	if (result == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_count_dots(str))
	{
		j = 0;
		while (str[k] != ':')
			result[i][0][j++] = str[k++];
		result[i][0][j] = '\0';
		k++;
		j = 0;
		while (str[k] != '\n')
			result[i][1][j++] = str[k++];
		result[i++][1][j] = '\0';
		k++;
	}
	result[i][0][0] = '\0';
	return (result);
}
