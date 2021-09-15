/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:42:04 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/20 11:21:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

# define PAS_ASSEZ "File name missing.\n"
# define TROP "Too many arguments.\n"
# define CANT "Cannot read file.\n"
# define BUFF_SIZE 4096

#endif
