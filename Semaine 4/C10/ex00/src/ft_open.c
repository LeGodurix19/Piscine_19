/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:37:57 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/20 11:55:21 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include "ft_ft.h"

int	ft_print(char *mon_fichier)
{
	int		pos_mon_fichier;
	int		verif;
	char	buff[BUFF_SIZE + 1];

	pos_mon_fichier = open(mon_fichier, O_RDONLY);
	if (pos_mon_fichier == -1)
	{
		ft_putstr(CANT);
		return (1);
	}
	verif = read(pos_mon_fichier, buff, BUFF_SIZE);
	while (verif)
	{
		write(1, buff, verif);
		verif = read(pos_mon_fichier, buff, BUFF_SIZE);
	}
	if (close(pos_mon_fichier) == 1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*nom_fichier;

	if (argc < 2)
		ft_putstr(PAS_ASSEZ);
	else if (argc > 2)
		ft_putstr(TROP);
	else
	{
		nom_fichier = argv[1];
		return (ft_print(nom_fichier));
	}
	return (0);
}
