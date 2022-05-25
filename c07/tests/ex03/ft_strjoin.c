/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:49:49 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/29 12:31:06 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		sep_len;
	int		total_len;
	int		i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (strs[i])
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	result = malloc(sizeof(char) * sep_len * (size - 1)  + sizeof(char) * total_len + 1);
	if (result == NULL)
		return (NULL);
	if (size == 0)
		result = "";
	i = 0;
	while (strs[i])
	{
		result = ft_strcat(result, strs[i]);
		if (strs[i + 1])
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}
