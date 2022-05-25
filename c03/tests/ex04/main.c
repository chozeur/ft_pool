/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:53:57 by flo               #+#    #+#             */
/*   Updated: 2021/10/20 01:23:49 by flo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[16] = "just look at it";
	char	to_find[5] = "look";

	printf("Ca donne ca\t%s\n", ft_strstr(str, to_find));
	return 0;
}
