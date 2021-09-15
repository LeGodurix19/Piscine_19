/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:09:51 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/22 11:52:29 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_it_here(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_how_many(char *str, char *charset)
{
	int	i;
	int	nbWords;
	int	lgWord;

	i = 0;
	nbWords = 0;
	while (str[i])
	{
		while (str[i] && ft_is_it_here(charset, str[i]))
			i++;
		lgWord = 0;
		while (str[i + lgWord] && !(ft_is_it_here(charset, str[i + lgWord])))
			lgWord++;
		if (lgWord)
			nbWords++;
		i += lgWord;
	}
	return (nbWords);
}

char	**ft_split2(char *str, char *charset, char **retour, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lgWord;

	i = 0;
	j = 0;
	while (i < nb)
	{
		while (str[j] && ft_is_it_here(charset, str[j]))
			j++;
		lgWord = 0;
		while (str[j + lgWord] && !(ft_is_it_here(charset, str[j + lgWord])))
			lgWord++;
		retour[i] = malloc(sizeof(char) * (lgWord + 1));
		if (!retour[i])
			return (NULL);
		ft_strncpy(retour[i], &str[j], lgWord);
		j += lgWord;
		i++;
	}
	return (retour);
}

char	**ft_split(char *str, char *charset)
{
	unsigned int	nbWords;
	char			**retour;

	nbWords = ft_how_many(str, charset);
	retour = malloc(sizeof(char *) * (nbWords + 1));
	if (!(retour))
		return (NULL);
	retour = ft_split2(str, charset, retour, nbWords);
	retour[nbWords] = 0;
	return (retour);
}
