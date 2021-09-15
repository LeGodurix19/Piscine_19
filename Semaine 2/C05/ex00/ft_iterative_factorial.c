/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:40:43 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/17 07:57:42 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int		i;
	double	j;

	i = 1;
	j = 0;
	if (nb >= i)
	{
		j = 2;
		while (j <= nb)
		{
			i = i * j;
			j++;
		}
	}
	else if (nb == 0)
		return (i);
	else
		return (0);
	return (i);
}
