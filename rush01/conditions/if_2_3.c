void    ft_row_2_3(int grid[4], char **argv)
{
    int i;
    int j;

    i = 24;
    j = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == '2' && argv[1][i - 8] == '3')
        {
            grid[j][2] = 4;
        }
        i++;
        j++;
    }
}