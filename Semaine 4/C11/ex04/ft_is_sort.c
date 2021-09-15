/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:03:13 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/22 07:58:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sign;

	sign = 1;
	i = -1;
	while (++i < length - 1 && sign)
		if ((*f)(tab[i], tab[i + 1]) < 0)
			sign = 0;
	if (sign != 1)
	{
		i = -1;
		while (++i < length - 1)
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
	}
	return (1);
}
