/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_convert_base2.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: hgoorick <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/28 11:44:48 by hgoorick		  #+#	#+#			 */
/*   Updated: 2021/07/28 18:13:47 by hgoorick         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_atoi_base(char *str, char *base);
int	ft_is_it_here(char a, char *base);
int	ft_max_long_base(char *base);
int	ft_conv_dec(char *base, int a);
int	ft_verif_base(char *base);

void	ft_putnbr_base(int nbr, char *base, char *retour, int taille)
{
	unsigned int	copyNbr;
	unsigned int	i;

	if (ft_verif_base(base))
	{
		i = 0;
		while (base[i])
			i++;
		if (nbr < 0)
		{
			copyNbr = -nbr;
			retour[0] = '-';
			if (copyNbr < i)
				taille++;
		}
		else
			copyNbr = nbr;
		if (copyNbr >= i)
			ft_putnbr_base(copyNbr / i, base, retour, taille - 1);
		retour[taille] = base[copyNbr % i];
	}
}

int	ft_malloc_mem(int nbr, char *base)
{
	unsigned int	copyNbr;
	unsigned int	i;
	int				retour;

	retour = 0;
	if (ft_verif_base(base))
	{
		i = 0;
		if (nbr < 0)
		{
			copyNbr = -nbr;
			retour++;
		}
		else
			copyNbr = nbr;
		while (base[i])
			i++;
		if (copyNbr >= i)
		{
			retour++;
			return (retour + ft_malloc_mem(copyNbr / i, base));
		}
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		retourNb;
	char	*retourChar;
	int		taille;

	retourNb = ft_atoi_base(nbr, base_from);
	taille = ft_malloc_mem(retourNb, base_to);
	retourChar = malloc(sizeof(char) * (taille + 2));
	retourChar[taille + 1] = '\0';
	ft_putnbr_base(retourNb, base_to, retourChar, taille);
	return (retourChar);
}
