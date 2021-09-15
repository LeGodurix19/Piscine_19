/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:42:36 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/22 08:41:10 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <unistd.h>

typedef int	(*t_op)(int, int);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_op_add(int a, int b);
int		ft_op_mul(int a, int b);
int		ft_op_sub(int a, int b);
int		ft_op_div(int a, int b);
int		ft_op_mod(int a, int b);
int		ft_div_error(void);
int		ft_mod_error(void);

#endif
