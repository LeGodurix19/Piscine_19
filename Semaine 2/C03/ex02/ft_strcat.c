/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:17:43 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/12 14:34:54 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	longDest;
	int	i;

	i = 0;
	longDest = 0;
	while (dest[longDest] != '\0')
	{
		longDest++;
	}
	while (src[i] != '\0')
	{
		dest[longDest] = src[i];
		longDest++;
		i++;
	}
	dest[longDest] = '\0';
	return (dest);
}
