NAME		= ClapTrap

SRCS	=	main.cpp \
			Bureaucrat.cpp

SRCS_HPP =  Bureaucrat.hpp
			

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++ -Wall -Werror -Wextra	#-fsanitize=address#
RM				= rm -f

NAME			= ClapTrap

all:			$(NAME)

$(NAME):		$(OBJS) Makefile $(SRCS_HPP)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.cpp *.hpp Makefile
		$(CC) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
