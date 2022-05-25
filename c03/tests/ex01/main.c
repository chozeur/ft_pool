/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:34:57 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/19 20:42:20 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[6] = "hello";
	char s2[6] = "happy";
	unsigned int n = 1;

	printf("s1 = %s\ts2 = %s\tn = %d\nft_strncmp(s1, s2, 1) = %d\nstrncmp(s1, s2, 1) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	return 0;
}
