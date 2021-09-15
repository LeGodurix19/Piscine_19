/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:49:59 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/27 08:08:09 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
    char    *cpy;

	i = 0;
	if (!tab[1])
		return ;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
            cpy = tab[i];
            tab[i] = tab[i+1];
            tab[i + 1] = cpy;
			i = 0;
		}
		else
			i++;
	}
}
