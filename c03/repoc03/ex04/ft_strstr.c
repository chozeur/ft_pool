/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:40:27 by flo               #+#    #+#             */
/*   Updated: 2021/10/26 12:10:18 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
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
	if (to_find[0] == '\0')
		return (str);
	return (0);
}
