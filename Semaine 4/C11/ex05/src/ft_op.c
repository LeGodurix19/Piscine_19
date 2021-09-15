/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 08:29:03 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/22 08:29:13 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ft.h"

int	ft_op_add(int a, int b)
{
	return (a + b);
}

int	ft_op_mul(int a, int b)
{
	return (a * b);
}

int	ft_op_sub(int a, int b)
{
	return (a - b);
}

int	ft_op_div(int a, int b)
{
	return (a / b);
}

int	ft_op_mod(int a, int b)
{	
	return (a % b);
}
