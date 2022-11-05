# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 23:03:40 by merlich           #+#    #+#              #
#    Updated: 2022/11/05 17:39:06 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	identify

SRCS		=	main.cpp Base.cpp

OBJS		=	${SRCS:.cpp=.o}

D_FILES		=	${SRCS:.cpp=.d}

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -Wno-unused -std=c++98 -MD

RM			=	rm -f

%.o:		%.cpp Makefile
			${CPP} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS} Makefile
			${CPP} ${OBJS} -o ${NAME}

-include ${D_FILES}

clean:
			${RM} ${OBJS} ${D_FILES}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
