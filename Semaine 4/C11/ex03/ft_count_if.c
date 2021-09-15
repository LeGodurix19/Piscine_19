/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 09:56:45 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/21 10:02:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	compteur;

	i = -1;
	compteur = 0;
	while (++i < length)
		if ((*f)(tab[i]) != 0)
			compteur++;
	return (compteur);
}
