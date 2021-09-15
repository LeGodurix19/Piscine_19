/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:22:26 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/24 17:39:21 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_H
# define FT_H

typedef s_infoFile{
	int		nbLine;
	int		nbCol;
	char	charVoid;
	char	charFull;
	char	charQuer;
}	t_infoFile;

typedef s_posib{
	int			x;
	int			y;
	int			taille;
	void		*data;
	t_possib	*next;
}	t_posib;


#endif
