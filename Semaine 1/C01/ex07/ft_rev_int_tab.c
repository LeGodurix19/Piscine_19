/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:52:48 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/08 15:38:43 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	copie;
	int	start;

	size -= 1;
	start = 0;
	while (size > start)
	{
		copie = tab[start];
		tab[start] = tab[size];
		tab[size] = copie;
		size--;
		start++;
	}
}
