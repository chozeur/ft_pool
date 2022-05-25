/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:26:42 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/24 16:14:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>


int main (int argc, char **argv)
{
    int i;
    int j;
    int grid[4][4];
    char str[17];

    input_str(argv[1], str);
    printf("%s\n", str);
    i = 0;
    j = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    i = 0;

    ft_col_up_4(grid, argv);
    ft_row_left_4(grid, argv);
    ft_row_2_3(grid, argv);
    
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            ft_putnbr(grid[i][j]);
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    

    return (0);
}