/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:26:43 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/12 14:30:14 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	longDest;
	unsigned int	longSrc;
	unsigned int	totalLong;

	totalLong = 0;
	longDest = 0;
	longSrc = 0;
	while (dest[longDest] != '\0' && longDest < size)
		longDest++;
	while (src[longSrc] != '\0')
		longSrc++;
	totalLong = totalLong + longDest + longSrc;
	if (size == longDest)
		return (totalLong);
	longSrc = 0;
	while (src[longSrc] != '\0' && longDest + longSrc < size - 1)
	{
		dest[longDest + longSrc] = src[longSrc];
		longSrc++;
	}	
	dest[longDest + longSrc] = '\0';
	return (totalLong);
}
