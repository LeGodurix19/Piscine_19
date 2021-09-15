/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:08:13 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/28 08:15:25 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char			*bin;
	int				i;
	int				count;
	unsigned int	n;

	if(argc < 3 || ft_strcmp(argv[1], "-c"))
		return (0);
	bin = basename(argv[0]);
	i = ft_atoi(argv[2]);
    
	if (i < 0)
		n = -i;
	else
		n = i;
	if (argc < 4 && ft_tail(NULL, n, 0 ,0) < 0)
		ft_puterr(bin, NULL, strerror(errno));
	i = 2;
	count = 0;
	while(++i < argc)
	{
		if (ft_tail(argv[i], n, count, (argc > 4)) < 0)
			ft_puterr(bin, argv[i], strerror(errno));
		else
			count++;
	}
	return (0);
}
