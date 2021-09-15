/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:49:01 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/22 10:57:13 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_lsit, void *data)
{
	if (*begin_list)
	{
		if ((*begin__list)->next)
			ft_list_push_back(&((*begin_list)->next), data);
		else
			((*begin_lst)->next) = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
