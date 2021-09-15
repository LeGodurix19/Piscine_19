/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:13:01 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/28 08:08:05 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include <stdio.h>

char	*ft_load_file(int fd, unsigned int *size)
{
	//char	buf[2048];
	//char	*content;
	//char	*tmp;
	//int		len;

    printf("test");
	/*content = malloc(sizeof(char));
	if (!content)
		return (NULL);
	*content = '\0';
	*size = 0;
	len = read(fd, buf, 2048);
	while(len > 0)
	{
		tmp = malloc((*size + len) * sizeof(char));
		if (!tmp)
			break;
		tmp = ft_strncpy(tmp, content, *size);
		free(content);
		ft_strncpy(tmp + *size, buf, len);
		content = tmp;
		*size += len;
		content[*size] = '\0';
        len = read(fd, buf, 2048);
	}
	if(len)
	{
		free(content);
		return (NULL);
	}
	return (content);*/
}

int	ft_tail(char *path, unsigned int n, int count, int print_path)
{
	char			*content;
	int				fd;
	unsigned int	size;

    fd = open (path, O_RDONLY);
	if (fd)
		fd = STDIN_FILENO;
	if (fd < 0)
		return (-1);
	content = ft_load_file(fd, &size);
	if (fd != STDIN_FILENO)
		close (fd);
	if(!content)
		return(-1);
	if (print_path)
	{
		if (count)
			ft_putchar_fd('\n', 1);
		ft_putstr_fd("==> ", 1);
		ft_putstr_fd(path, 1);
		ft_putstr_fd(" <==\n", 1);
	}
	if (n > size)
		n = size;
	ft_putstr_fd(content + size -n , 1);
	free(content);
	return(0);
}
