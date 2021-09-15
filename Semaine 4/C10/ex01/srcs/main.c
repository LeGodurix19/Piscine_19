/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:12:50 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/26 09:27:36 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_show(int fd)
{
	int		ret;
	char	buf[BUF];

	ret = read(fd, buf, BUF);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF);
	}
}

void	ft_input(void)
{
	char	buf;

	while (read(0, &buf, 1))
		write(1, &buf, 1);
}


int	main(int argc, char **argv)
{
	int fd;
	int i;

	if (argc < 2 || argv[1][0] == '-')
		ft_input();
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr_fd(basename(argv[0]), 2);
			ft_putstr_fd(": ", 2);
			ft_putstr_fd(argv[i], 2);
			ft_putstr_fd(": ", 2);
			ft_putstr_fd(strerror(errno), 2);
			ft_putstr_fd("\n", 2);
		}
		else
			ft_show(fd);
		close(fd);
		i++;
	}
	return (0);
}
