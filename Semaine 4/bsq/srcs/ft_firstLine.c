char    *ft_firstLine(char *av)
{
    char    *firstLine;
    char    i;
    int fd;
    int j;
    firstLine= malloc(sizeof(char) * ft_countMalloc(av, 1));
    fd = open(av, O_RDONLY);
    read(fd, &i, sizeof(char));
    while (i > 32 && i < 127)
    {
        read(fd, &i, sizeof(char));
        test[j] = i;
    }
    return (test);
    close(fd);
}

t_fristLine ft_putFirstLine(char *firstLine)
{
    t_fristLine jaipasdidee;
    int     compteur;
    
    compteur = ft_countMalloc(av, 1);
    while(compteur)
    {
        if compteur()
        compteur--;
    }
}
