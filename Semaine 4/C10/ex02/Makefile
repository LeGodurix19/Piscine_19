# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 08:23:57 by hgoorick          #+#    #+#              #
#    Updated: 2021/07/28 08:31:45 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= ft_tail

SOURCEDIR 	= ./srcs/
HEADERDIR 	= ./include/

SRC		= ${addprefix $(SOURCEDIR), 	ft_atoi.c \
						ft_put.c \
						ft_str.c \
						ft_tail.c \
						main.c}

OBJ		= ${SRC:.c=.o}

OPTIONS		= -I $(HEADERDIR)
FLAGS		= -Wall -Wextra -Werror

.c.o:
			@gcc ${FLAGS} ${OPTIONS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}: 	${OBJ}
			@gcc ${FLAGS} ${OPTIONS} ${OBJ} -o ${NAME}

clean: 
			@rm -rf ${OBJ}

fclean: 	clean
			@rm -rf ${NAME}

re: fclean all
