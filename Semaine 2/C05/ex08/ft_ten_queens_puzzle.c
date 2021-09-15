/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:01:48 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/17 08:38:49 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_pos(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

void	ft_print(int *tab, int *compteur)
{
	int	i;
	int	sortie;

	i = 0;
	while (i < 10)
	{
		sortie = tab[i] + '0';
		write(1, &sortie, 1);
		i++;
	}
	write(1, "\n", 1);
	*compteur += 1;
}

int	ft_queen_try(int *tab, int i, int *compteur)
{
	int	test;
	int	k;
	int	j;

	if (i >= 10)
		ft_print(tab, compteur);
	else
	{
		j = 0;
		while (j < 10)
		{
			tab[i] = j++;
			test = 1;
			k = 0;
			while (test && k < i)
			{
				test = (tab[i] != tab[k]) && ft_pos(tab[i] - tab[k]) != (i - k);
				k++;
			}
			if (test && ft_queen_try(tab, i + 1, compteur))
				return (1);
		}
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	echiquier[10];
	int	compteur;

	compteur = 0;
	ft_queen_try(echiquier, 0, &compteur);
	return (compteur);
}
