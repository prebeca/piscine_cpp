NAME	=	replace

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	clang++

CFLAGS	=	-g -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o : %.cpp
			${CC} ${CFLAGS} -c $< -o $@

.PHONY:		clean fclean re .c.o all

clean:
			rm -f *.o
fclean:		clean
			rm -f ${NAME}
			rm -f *.replace

re:			fclean all