/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:26:11 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/19 20:33:45 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char	s1[6] = "hello";
	char	s2[6] = "happy";
	printf("s1 : %s\ts2 : %s\nft_strcmp(s1, s2) = %d\nstrcmp(s1, s2) = %d", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	return 0;
}
