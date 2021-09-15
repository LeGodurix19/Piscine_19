/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_convert_base.c								  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: hgoorick <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/15 10:45:13 by hgoorick		  #+#	#+#			 */
/*   Updated: 2021/07/28 16:24:43 by hgoorick         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_conv_dec(char *base, int a)
{
	int	i;

	i = 0;
	while (base[i] != a)
		i++;
	return (i);
}

int	ft_max_long_base(char *base)
{
	int	compteur;

	compteur = 0;
	while (base[compteur])
		compteur++;
	return (compteur);
}

int	ft_is_it_here(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base [i] != a)
		i++;
	if (base[i] == a)
		return (1);
	else
		return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	rep;

	i = 0;
	rep = 0;
	signe = 1;
	if (ft_verif_base(base))
	{
		while (str[i] < 33)
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				signe *= -1;
			i++;
		}
		while (str[i] && ft_is_it_here(str[i], base))
		{
			rep = rep * ft_max_long_base(base) + ft_conv_dec(base, str[i]);
			i++;
		}
	}
	return (rep * signe);
}
