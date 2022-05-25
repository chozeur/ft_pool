void	ft_col_up_4(int grid[4][4], char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '4')
		{
			grid[0][j] = 1;
			grid[1][j] = 2;
			grid[2][j] = 3;
			grid[3][j] = 4;
		}
		i++;
		j++;
	}
}

void	ft_row_left_4(int grid[4][4], char **argv)
{
	int	i;
    int j;

	i = 0;
    j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '4')
		{
			grid[j][0] = 1;
			grid[j][1] = 2;
			grid[j][2] = 3;
			grid[j][3] = 4;
		}
        j++;
		i++;
	}
}

void    ft_row_2_3(int grid[4][4], char **argv)
{
    int i;
    int j;

    i = 16;
    j = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == '2' && argv[1][i + 8] == '3')
        {
            grid[j][2] = 4;
        }
        i++;
        j++;
    }
}