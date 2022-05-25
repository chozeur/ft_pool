char *input_str(char *argv, char str[17])
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (argv[i])
    {
        if (argv[i] != ' ')
        {
            str[j] = argv[i];
            j++;
        }
        i++;
    }
}