/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:05:19 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/23 16:05:25 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*rush01.h*/

void    ft_print_grid(char **grid, int size);
void    ft_putchar(char c);
void    ft_set_grid(char col1up, char col2up, char col3up, char col4up,
		char col1down, char col2down, char col3down, char col4down,
		char row1left, char row2left, char row3left, char row4left,
		char row1right, char row2right, char row3right, char row4right);
void	ft_grid_init(char **grid, int size);
