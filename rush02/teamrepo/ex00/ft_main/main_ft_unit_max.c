/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit_max_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:02:24 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/30 17:03:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("0 : %d\n", ft_unit_max("0"));
	printf("10 : %d\n", ft_unit_max("10"));
	printf("100 : %d\n", ft_unit_max("100"));
	printf("1000 : %d\n", ft_unit_max("1000"));
	printf("10000 : %d\n", ft_unit_max("10000"));
	printf("100000 : %d\n", ft_unit_max("100000"));
	printf("1000000 : %d\n", ft_unit_max("1000000"));
	printf("10000000 : %d\n", ft_unit_max("10000000"));
	printf("100000000 :%d\n", ft_unit_max("100000000"));
	printf("1000000000 : %d\n", ft_unit_max("1000000000"));
	return (0);
}

