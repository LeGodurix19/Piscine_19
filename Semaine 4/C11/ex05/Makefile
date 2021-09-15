# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 16:19:20 by hgoorick          #+#    #+#              #
#    Updated: 2021/07/21 16:29:52 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SOURCEDIR = ./src/
HEADERDIR = ./includes/

SRC = $(SOURCEDIR)ft_print.c $(SOURCEDIR)ft_atoi.c $(SOURCEDIR)ft_op.c $(SOURCEDIR)ft_error.c $(SOURCEDIR)main.c
OBJ = $(SOURCEDIR)ft_print.o $(SOURCEDIR)ft_atoi.o $(SOURCEDIR)ft_op.o $(SOURCEDIR)ft_error.o $(SOURCEDIR)main.o

OPTIONS = -I $(HEADERDIR)
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_print.c -o $(SOURCEDIR)ft_print.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_atoi.c -o $(SOURCEDIR)ft_atoi.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_op.c -o $(SOURCEDIR)ft_op.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)ft_error.c -o $(SOURCEDIR)ft_error.o
	@gcc $(FLAGS) $(OPTIONS) -c $(SOURCEDIR)main.c -o $(SOURCEDIR)main.o
	@gcc $(FLAGS) $(OPTIONS) $(OBJ) -o do-op

clean: 
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

