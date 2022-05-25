/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:28:06 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/01 17:16:52 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main_size(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 0)
			count++;
		while (is_charset(str[i], charset) == 0)
			i++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	 int	i;
	 int	j;
	 int	k;

	result = (char **)malloc(sizeof(char *) * (main_size(str, charset) + 1));
	result[main_size(str, charset)] = NULL;
	i = 0;
	while (result[i++])
		result[i - 1] = (char *)malloc(sizeof(char) * 256);
	i = 0;
	j = 0;
	k = 0;
	while (str[k])
	{
		while (is_charset(str[k++], charset) == 0)
			result[i][j++] = str[k - 1];
		if (is_charset(str[k - 1], charset) == 0)
			result[i][j] = '\0';
		i++;
		k++;
	}
	return (result);
}
