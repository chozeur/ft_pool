/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:05:19 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 19:22:18 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*rush01.h*/

void    ft_print_grid(int **grid, int size);
void    ft_putchar(char c);
void    ft_set_grid(int **grid, int col1up, int col2up, int col3up, int col4up,
		int col1down, int col2down, int col3down, int col4down,
		int row1left, int row2left, int row3left, int row4left,
		int row1right, int row2right, int row3right, int row4right);
void	ft_grid_init(int **grid, int size);
int		ft_check_arg(char *arg);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_char_to_int(char c);