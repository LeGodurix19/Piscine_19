/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:13:03 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/26 09:13:50 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H
# define BUF 1
# include <libgen.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_input(void);
void	ft_show(int fd);

#endif
