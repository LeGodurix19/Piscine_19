/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:41:03 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/11 18:01:33 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lon;
	unsigned int	i;

	i = 0;
	lon = 0;
	while (src[lon] != '\0')
	{
		lon++;
	}
	if (size == 0)
	{
		return (lon);
	}
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lon);
}
