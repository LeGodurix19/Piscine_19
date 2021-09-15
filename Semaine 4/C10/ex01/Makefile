# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 08:43:10 by hgoorick          #+#    #+#              #
#    Updated: 2021/07/26 08:51:51 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_cat

SRCS		=	${addprefix $(SRCDIR),main.c ft_putchar.c ft_putstr.c}
OBJS		=	${SRCS:.c=.o}

SRCDIR		=	./srcs/
HEADERDIR	=	./include/

CC		=	gcc
CFLAGS		=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -I ${HEADERDIR} -c $< -o ${<:.c=.o}

all: 		${NAME}

${NAME}: 	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean: 	clean
			rm -f ${NAME}
