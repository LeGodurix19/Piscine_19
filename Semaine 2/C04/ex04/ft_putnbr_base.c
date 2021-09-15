/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:03:03 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/13 12:17:47 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_verif_base(char *base)
{
	int	compteur;
	int	compteurSup;

	compteur = 0;
	while (base[compteur])
		compteur++;
	if (base[0] == '\0' || compteur == 1)
		return (0);
	compteur = 0;
	while (base[compteur])
	{
		if (base[compteur] == '+' || base[compteur] == '-')
			return (0);
		if (base[compteur] < 33 || base[compteur] == 127)
			return (0);
		compteurSup = 1;
		while (base[compteur + compteurSup])
		{
			if (base[compteur + compteurSup] == base[compteur])
				return (0);
			compteurSup++;
		}
		compteur++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	copyNbr;
	unsigned int	i;

	if (ft_verif_base(base))
	{
		i = 0;
		copyNbr = nbr;
		if (nbr < 0)
		{
			copyNbr *= -1;
			ft_putchar('-');
		}
		while (base[i])
			i++;
		if (copyNbr >= i)
			ft_putnbr_base(copyNbr / i, base);
		ft_putchar(base[copyNbr % i]);
	}
}
