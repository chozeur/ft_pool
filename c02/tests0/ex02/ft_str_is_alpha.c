/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:20:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/17 22:47:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (ft_is_up(str[i]) == 1 || ft_is_low(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
