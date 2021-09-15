/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:02:54 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/20 15:23:18 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

void	ft_putnbr(long nb )
{
	int	div;
	int	mod;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb *= -1;
	}
	div = nb / 10;
	mod = nb % 10;
	if (div != 0)
		ft_putnbr(div);
	ft_putchar(mod + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	position;

	position = 0;
	while (par[position].str)
	{
		ft_putstr(par[position].str);
		ft_putchar('\n');
		ft_putnbr(par[position].size);
		ft_putchar('\n');
		ft_putstr(par[position].copy);
		ft_putchar('\n');
		position++;
	}
}
