int ft_countMalloc(char *av, int pos)
{
    int fd ;
    char i;
    int compteur;
    
    fd = ft_openFile(av);
    i = ft_readFile(fd);
    compteur = 0;
    while (i > 32 && i < 127)
    {
        i = ft_readFile(fd);
        compteur++;
    }
    if (pos == 1)
        ft_closeFile(fd);
    else
    {
        compteur = 0;
        while (i > 32 && i < 127)
        {
            i = ft_readFile(fd);
            compteur++;
        }
        ft_closeFile(fd);
    }
    return(compteur);
}
