NAME	=	Bureaucrat

C_DIR	=	src

O_DIR	=	obj

SRCS	=	${patsubst %, ${C_DIR}/%, ${C_FILES}}

C_FILES	=	main.cpp\
			Bureaucrat.cpp\
			Form.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\

OBJS	=	${patsubst ${C_DIR}/%, ${O_DIR}/%, ${SRCS:.cpp=.o}}

CC		=	clang++

CFLAGS	=	-I./inc/ -g -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${O_DIR}/%.o : ${C_DIR}/%.cpp
			@mkdir -p obj
			${CC} ${CFLAGS} -c $< -o $@

.PHONY:		clean fclean re .c.o all

clean:
			rm -rf ${O_DIR}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
