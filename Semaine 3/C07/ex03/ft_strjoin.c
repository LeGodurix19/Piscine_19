/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:24:44 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/18 09:26:16 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_espace_mem(int size, char **strs, char *sep)
{
	int	colonne;
	int	ligne;
	int	taille;

	taille = 0;
	while (sep[taille])
		taille++;
	taille *= size - 1;
	colonne = 0;
	while (colonne < size)
	{
		ligne = 0;
		while (strs[colonne][ligne++])
			taille++;
		colonne++;
	}
	if (taille <= 0)
		return (0);
	taille++;
	return (taille);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_out;
	int		colonne;
	int		ligne;
	int		separation;
	int		final;

	str_out = malloc(sizeof(char) * ft_espace_mem(size, strs, sep));
	if (size == 0)
		return (str_out);
	final = -1;
	colonne = -1;
	while (++colonne < size)
	{
		ligne = -1;
		separation = -1;
		while (strs[colonne][++ligne])
			str_out[++final] = strs[colonne][ligne];
		while (sep[++separation] && colonne < size - 1)
			str_out[++final] = sep[separation];
	}
	str_out[++final] = '\0';
	return (str_out);
}
