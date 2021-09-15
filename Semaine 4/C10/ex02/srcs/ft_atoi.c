/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:05:17 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/27 21:05:33 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_atoi(char *str)
{
	int	rep;
	int	sign;
	int	i;

	rep = 0;
	sign = 1;
	i = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '+' || str[i] == '-')
    {
		if (str[i] == '-')
			sign *= -1;
        i++;
    }
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
		rep = (rep * 10) + (str[i] - 48);
        i++;
    }
	return (rep * sign);
}
