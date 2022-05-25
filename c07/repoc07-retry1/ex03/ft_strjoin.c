/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:49:49 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/02 11:41:07 by flcarval         ###   ########.fr       */
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

int	ft_total_len(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

void	ft_strjoin_supply(int size, char *result, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i != (size - 1))
			result = ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		sep_len;
	int		len;

	len = 0;
	sep_len = ft_strlen(sep);
	len = ft_total_len(size, strs);
	result = malloc(sizeof(char) * sep_len * (size - 1) \
			+ sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	if (size == 0)
		return (result);
	else
		ft_strjoin_supply(size, result, strs, sep);
	return (result);
}
