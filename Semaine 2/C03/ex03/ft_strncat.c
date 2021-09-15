/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:29:49 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/12 14:49:39 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				longDest;
	unsigned int	i;

	i = 0;
	longDest = 0;
	while (dest[longDest] != '\0')
	{
		longDest++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[longDest] = src[i];
		longDest++;
		i++;
	}
	dest[longDest] = '\0';
	return (dest);
}
