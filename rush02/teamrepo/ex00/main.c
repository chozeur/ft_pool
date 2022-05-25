/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:08:02 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 22:14:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/rush02.h"

/* When user send 2 arguments, the program must try to change dictionnary.
 *  When user send 1 argument, the program must use the default dictionnary.
 *
 *
 */

void    resolve_hundred(char ***dict, char *arg, int *i, int *len);
void    resolve_million(char ***dict, char *arg, int *i, int *len);
void    resolve_thousand(char ***dict, char *arg, int *i, int *len);

char	*find_char_in_dict(char **dict[], char nb)
{
	int	i;

	i = 0;
	while (dict[i][0])
	{
		if (dict[i][0][0] == nb && dict[i][0][1] == '\0')
			return (dict[i][1]);
		i++;
	}
	return (0);
}

char	*find_in_dict(char **dict[], char diz, char unit)
{
	int	i;

	i = 0;
	while (dict[i][0])
	{
		if (dict[i][0][0] == diz && dict[i][0][1] == unit
				&& dict[i][0][1] != '\0'
				&& dict[i][0][2] == '\0')
			return (dict[i][1]);
		i++;
	}
	return (0);
}

void	resolve_billion(char ***dict, char *arg, int *i, int *len)
{
	char	*letter;

	letter = find_char_in_dict(dict, arg[0]);
	ft_putstr(letter);
	ft_putstr(" billion");
	(*i)++;
	resolve_million(dict, arg, i, len);
}

void	resolve_million(char ***dict, char *arg, int *i, int *len)
{
	while (arg[*i] == '0')
		*i += 1;
	resolve_hundred(dict, arg, i, len);
	if (*len == 6 || (*len == 7 && arg[1] != '0'))
		ft_putstr(" million ");
	resolve_thousand(dict, arg, i, len);
}

void	resolve_thousand(char ***dict, char *arg, int *i, int *len)
{
	while (arg[*i] == '0')
		*i += 1;
	resolve_hundred(dict, arg, i, len);
	if (*len >= 4 && arg[*len - *i] != '0')
		ft_putstr(" thousand ");
	resolve_hundred(dict, arg, i, len);
}

void	resolve_hundred(char ***dict, char *arg, int *i, int *len)
{
	char *letter;
	while (arg[*i] == '0')
	{
		*i += 1;
		*len -= 1;
	}
	if (*len % 3 == 0 && *len >= 3)
	{
		letter = find_char_in_dict(dict, arg[*i]);
		ft_putstr(find_char_in_dict(dict, arg[*i]));
		ft_putstr(" hundred ");
		*i += 1;
		*len -= 1;
	}
	if (*len % 3 == 2)
	{
		if (arg[*i] == '1')
		{
			letter = find_in_dict(dict, arg[*i], arg[*i + 1]);
			*i += 2;
			*len -= 2;
			ft_putstr(letter);
			if (arg[*i + 1] != '0')
				ft_putchar(' ');
		}
		else if (arg[*i] != '0')
		{
			letter = find_in_dict(dict, arg[*i], '0');
			ft_putstr(letter);
			letter = find_char_in_dict(dict, arg[*i + 1]);
			ft_putchar(' ');
			ft_putstr(letter);
			*len -= 2;
			*i += 2;
		}
		else
		{
			*len -= 1;
			*i += 1;
		}
	}
	if (*len % 3 == 1)
	{
		if (arg[*i] != '0')
		{
			letter = find_char_in_dict(dict, arg[*i]);
			*i += 1;
			*len -= 1;
			ft_putstr(letter);
		}
	}
}

void	ft_strdup_zero(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] == '0')
		i++;
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
}

void	resolve_rush(char ***dict, char *arg)
{
	int	unit_max;
	char	*arg_parsed;
	int	i;
	int	nbr_len;

	i = 0;
	unit_max = ft_unit_max(arg);
	arg_parsed = (char *)malloc(sizeof(char *) * 11);
	if (arg_parsed == NULL)
		return ;
	ft_strdup_zero(arg_parsed, arg);
	nbr_len = ft_strlen(arg_parsed);
	if (unit_max == 4)
		resolve_billion(dict, arg_parsed, &i, &nbr_len);
	else if (unit_max == 3)
		resolve_million(dict, arg_parsed, &i, &nbr_len);
	else if (unit_max == 2)
		resolve_thousand(dict, arg_parsed, &i, &nbr_len);
	else
		resolve_hundred(dict, arg_parsed, &i, &nbr_len);
}

int	main(int argc, char *argv[])
{
	char	*dictionnary;
	long long	check_arg;
	char	***split_dict;

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
	return (0);
}
