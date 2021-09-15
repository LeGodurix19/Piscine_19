/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:53:53 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/27 20:54:49 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void    ft_putstr_fd(char *str, int fd)
{
    write(fd, str, ft_strlen(str));
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void    ft_puterr(char *bin, char *path, char *error)
{
    ft_putstr_fd(bin, STDERR_FILENO);
    ft_putstr_fd(": ", STDERR_FILENO);
    ft_putstr_fd(path, STDERR_FILENO);
    ft_putstr_fd(": ", STDERR_FILENO);
    ft_putstr_fd(error, STDERR_FILENO);
    ft_putstr_fd("\n", STDERR_FILENO);
}
