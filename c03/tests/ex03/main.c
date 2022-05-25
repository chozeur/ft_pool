/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:48:46 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/20 12:53:04 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int n);

int main()
{
	char dest[256] = "1234";
	char src[256] = "5678";
	printf("ft_strncat(dest, src, 2) = %s\nstrncat(dest, src, 2) = %s\n", ft_strncat(dest, src, 2), strncat(dest, src, 2));
	return 0;
}
