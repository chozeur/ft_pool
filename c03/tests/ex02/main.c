/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:37:51 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/20 12:43:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c);
char	*ft_strcat(char *dest, char *src);

int	main()
{
	char dest[256] = "1234";
	char src[256] = "5678";
	printf("ft_strcat(1234, 5678) = %s", ft_strcat(dest, src));
	return 0;
}
