char    **ft_initMat(char *av)
{
    int p;
    int j;
    char **test;
    char i;
    int fd;
    
    j = 0;
    p = ft_countMalloc(av, 0);
    test = malloc(4 * sizeof(int *));
    test[j] = malloc(p * sizeof(int));
    p = 0;
    fd = ft_openFile(av);
    while (read(fd, &i, sizeof(char)))
    {
        if(i < 33 || i > 126)
        {
            p = 0;
            j++;
            test[j] = malloc(p * sizeof(int));
            printf("\n");
        }
        else
        {
            test[j][p] = i;
            printf("%c",test[j][p]);
        }
        p++;
    }
    ft_closeFile(fd);
    return (test);
}
