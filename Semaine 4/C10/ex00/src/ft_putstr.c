/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:15:50 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/08 20:14:10 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}
