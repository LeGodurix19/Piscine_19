/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:00:21 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/19 07:39:35 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tabReturn;
	int	i;

	tabReturn = NULL;
	if (min >= max)
		return (tabReturn);
	tabReturn = malloc(sizeof(int) * (max - min));
	i = 0;
	while (max > (min + i))
	{
		tabReturn[i] = min + i;
		i++;
	}
	return (tabReturn);
}
