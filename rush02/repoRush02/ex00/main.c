/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:08:02 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 23:21:04 by recarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* When user send 2 arguments, the program must try to change dictionnary.
 *  When user send 1 argument, the program must use the default dictionnary.
 *
 *
 */

void	main_two(char *dictionnary, long long check_arg, int argc, char **argv)
{
	char	***split_dict;

	if (dictionnary == NULL)
		ft_putstr("Dict Error\n");
	else if (check_arg == -1)
		ft_putstr("Error\n");
	else
	{
		split_dict = ft_split(dictionnary);
		if (argc == 2)
			resolve_rush(split_dict, argv[1]);
		else
			resolve_rush(split_dict, argv[2]);
	}
}

int	main(int argc, char *argv[])
{
	     char	*dictionnary;
	long long	check_arg;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		check_arg = ft_atoi_usint(argv[2]);
		dictionnary = ft_get_filecontent(argv[1]);
	}
	else
	{
		check_arg = ft_atoi_usint(argv[1]);
		dictionnary = ft_get_filecontent("numbers.dict");
	}
	main_two(dictionnary, check_arg, argc, argv);
	return (0);
}
