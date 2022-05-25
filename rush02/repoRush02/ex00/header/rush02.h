/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:21:06 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 23:03:41 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_unit_max(char *str);
int		ft_is_printable(char c);
int		ft_open(char *file);
int		ft_is_digit(char c);
int		ft_strlen_nospace(char *str);
int		ft_is_space(char c);
int		ft_strlen(char *str);
char		*ft_read(int file_desc);
char		*ft_get_filecontent(char *dictionnary);
char		*ft_strcat(char *dest, char *src);
char		*ft_strstr(char *str, char *to_find);
char		***ft_split(char *str);
char		*find_char_in_dict(char **dict[], char nb);
char		*find_in_dict(char **dict[], char diz, char unit);
void		resolve_billion(char ***dict, char *arg, int *i, int *len);
void		ft_putnbr(int nb);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		resolve_million(char ***dict, char *arg, int *i, int *len);
void		ft_strdup_nospace(char *dest, char *src);
void		resolve_thousand(char ***dict, char *arg, int *i, int *len);
void		resolve_hundred(char ***dict, char *arg, int *i, int *len);
void		ft_strdup_zero(char *dest, char *src);
long long	ft_atoi_usint(char *str);
void    resolve_rush(char ***dict, char *arg);
#endif
