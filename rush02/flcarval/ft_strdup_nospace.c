/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_nospace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:02:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/30 15:06:52 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup_nospace(char *src)
{
	char	*dest;
	int	len;
	int	i;
	int	j;

	len = ft_strlen_nospace(src);
	dest = malloc(sizeof(char) * len + 1);
	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] != ' ')
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	return (dest);
}
