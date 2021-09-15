/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:39:35 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/24 18:46:52 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char    ft_readFile(int fd)
{
    char    i;
    
    read(fd, &i, sizeof(char));
    return (i);
}

int ft_openFile(char *fileName)
{
    return (open(fileName, O_RDONLY));
}

int ft_closeFile(int    fd)
{
    return (close(fd));
}

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

int main(int argc, char **argv)
{
    int fd ;
    char i;
	int p, j;
    if (argc == 2)
        ft_initMat(argv[1]);
}


