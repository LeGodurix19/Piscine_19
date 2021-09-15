/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:30:02 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/21 10:29:43 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
		compteur++;
	return (compteur);
}

char	*ft_str_dup(char *src)
{
	char	*dest;
	int		i;
	int		lon;

	i = 0;
	lon = ft_strlen(src);
	dest = malloc(sizeof(char) * lon + 1);
	if (!dest)
		return (NULL);
	while (i < lon)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = (t_stock_str *)malloc(sizeof(*tab) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_str_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
