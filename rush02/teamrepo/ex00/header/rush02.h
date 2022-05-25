/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarlie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:21:06 by recarlie          #+#    #+#             */
/*   Updated: 2021/10/31 14:04:24 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

int	ft_strcmp(char *s1, char *s2);
char	*ft_read(int file_desc);
int		ft_open(char *file);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_strdup_nospace(char *dest, char *src);
int		ft_strlen_nospace(char *str);
char	*ft_get_filecontent(char *dictionnary);
char	*ft_strcat(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
int		ft_is_space(char c);
int		ft_is_digit(char c);
int		ft_is_printable(char c);
char	***ft_split(char *str);
long long	ft_atoi_usint(char *str);
int		ft_unit_max(char *str);
#endif
