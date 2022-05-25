#include <stdio.h>
#include "../header/rush02.h"
int main()
{
        char s1[] = "  1234";
        char s2[] = "-1234";
        char s3[] = "--1234";
        char s4[] = "123400000000";
        char s5[] = "4294967295";
        printf("%s : %d\n", s1, ft_atoi_usint(s1));
  //      printf("%s : %d\tputnbr : %d\n", s2, ft_atoi_usint(s2), ft_putnbr(ft_atoi_usint(s2)));
        printf("%s : %d\n", s3, ft_atoi_usint(s3));
    //    printf("%s : %d\tputnbr : %d\n", s4, ft_atoi_usint(s4), ft_putnbr(ft_atoi_usint(s4)));
        printf("%s : %u\n", s5, ft_atoi_usint(s5));
	ft_putnbr(ft_atoi_usint(s2));
	ft_putchar('\n');
	ft_putnbr(ft_atoi_usint(s4));
}
