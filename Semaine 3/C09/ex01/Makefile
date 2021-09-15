v# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 09:29:26 by hgoorick          #+#    #+#              #
#    Updated: 2021/07/19 10:24:14 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a


INC		= includes
OBJ		= srcs


SRC		= ${addprefix $(OBJ)/,ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c}
OBJS		= ${SRC:.c=.o}


CC		= gcc
CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.c=.o} 

all: 		${NAME}

${NAME}: 	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean: 	clean
			rm -f ${NAME}
/Users/hgoorick/Desktop/42-Finish/Semaine 3/C07/ex04/exe
re: 		fclean all

.PHONY: 	all clean fclean re

