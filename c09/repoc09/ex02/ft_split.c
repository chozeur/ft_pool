/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:29:56 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/03 16:01:27 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_cs(char c, char *charset)
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

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_cs(str[i], charset) == 1)
			i++;
		if (str[i] && is_cs(str[i], charset) == 0)
			count++;
		while (str[i] && is_cs(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	*strdup_custom(char *str, char *charset, int *i)
{
	 int	len;
	 int	j;
	char	*dup;

	len = 0;
	while (str[len] && is_cs(str[len], charset) == 0)
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	j = 0;
	while (str[j] && is_cs(str[j], charset) == 0)
	{
		dup[j] = str[j];
		(*i)++;
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	 int	i;
	 int	j;
	 int	nb_words;
	char	**result;

	nb_words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < nb_words)
	{
		while (str[i] && is_cs(str[i], charset) == 1)
			i++;
		if (str[i] && is_cs(str[i], charset) == 0)
		{
			result[j] = strdup_custom(&str[i], charset, &i);
			j++;
		}
		while (str[i] && is_cs(str[i], charset) == 0)
			i++;
	}
	result[j] = 0;
	return (result);
}
