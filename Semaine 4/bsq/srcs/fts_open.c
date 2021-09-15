/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:57:37 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/24 17:22:08 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_readFile(int fd)
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
