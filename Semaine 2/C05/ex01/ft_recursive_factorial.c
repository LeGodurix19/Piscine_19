/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:56:52 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/17 07:57:18 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		if (nb < -1)
			return (nb * ft_recursive_factorial(nb + 1));
		else
			return (-1);
	}
	else if (nb > 0)
	{
		if (nb > 1)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (1);
	}
	return (1);
}
