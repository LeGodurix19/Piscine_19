# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 11:34:21 by hgoorick          #+#    #+#              #
#    Updated: 2021/07/20 11:37:36 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCEDIR = ./src/
HEADERDIR = ./includes/

SRC = $(SOURCEDIR)ft_putchar.c $(SOURCEDIR)ft_putstr.c $(SOURCEDIR)ft_open.c
OBJ = $(SOURCEDIR)ft_putchar.o $(SOURCEDIR)ft_putstr.o $(SOURCEDIR)ft_open.o

OPTIONS = -I $(HEADERDIR)
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_putchar.c -o $(SOURCEDIR)ft_putchar.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_putstr.c -o $(SOURCEDIR)ft_putstr.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_open.c -o $(SOURCEDIR)ft_open.o
	@gcc $(FLAGS) $(OPTIONS) $(OBJ) -o ft_display_file

clean: 
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean all
