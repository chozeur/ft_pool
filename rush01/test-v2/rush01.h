/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:22:31 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/24 16:14:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_char_to_int(char c);
void	ft_col_up_4(int grid[4][4], char **argv);
void	ft_row_left_4(int grid[4][4], char **argv);
void    ft_row_2_3(int grid[4][4], char **argv);
char    *input_str(char *argv, char str[17]);
