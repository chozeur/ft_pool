/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:56:02 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/31 14:26:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/rush02.h"
#include <stdio.h>

int	main()
{
	char	str[] = "1234:un deux trois quatre\n5678:cinq six sept huit\n9101112:neuf dix onze douze\n";
	char	charset[] = ":\n";
	char	***retour = ft_split(str, charset);
//	int	i = 0;

/*	while (i < 3)
	{
		printf("| %s |\n", retour[i][0]);
		printf("| %s |\n", retour[i][1]);
		i++;
	}
*/
	(void)retour;
	return (0);
}
