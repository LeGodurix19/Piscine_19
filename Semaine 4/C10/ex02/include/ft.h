/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:15:31 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/28 08:16:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <sys/errno.h>
# include <libgen.h>
# include <string.h>

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_puterr(char *bin, char *path, char *error);

int    ft_strlen(char *str);
int    ft_strcmp(char *s1, char *s2);
char    *ft_strncpy(char *dest, char *src, unsigned int n);

int    ft_atoi(char *str);

int    ft_tail(char *path, unsigned int n, int count, int print_path);
char    *ft_load_file(int fd, unsigned int *size);

#endif
