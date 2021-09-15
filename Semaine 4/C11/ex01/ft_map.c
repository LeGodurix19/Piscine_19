/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 09:39:35 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/27 08:06:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;

	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < length)
		arr[i] = (*f)(tab[i]);
	return (arr);
}
