/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:21:21 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/18 19:08:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_is_char(str[i]) == 1)
		str[i] = str[i] - 32;
	i++;
	while (str[i])
	{
		if (ft_is_char(str[i - 1]) == 0
			&& ft_is_char(str[i]) == 1)
			str[i] = str[i] -32;
		else if (ft_is_char(str[i - 1]) != 0 && ft_is_char(str[i]) == 2)
			str[i] = str[i] + 32;
		else if (ft_is_char(str[i - 1]) == 0
			&& ft_is_char(str[i + 1]) == 0 && ft_is_char(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
