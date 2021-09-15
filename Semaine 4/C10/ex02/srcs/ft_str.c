/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:03:50 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/27 21:05:46 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	while (i < n)
    {
		dest[i] = '\0';
        i++;
    }
    return (dest);
}

int    ft_strlen(char *str)
{
    int    compteur;
    
    compteur = 0;
    while (str[compteur])
        compteur++;
    return (compteur);
}

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
