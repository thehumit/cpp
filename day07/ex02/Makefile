NAME		= ClapTrap

SRCS	=	main.cpp


SRCS_HPP = Array.hpp
			

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	-fsanitize=address -Wall -Werror -Wextra
RM				= rm -f

NAME			= ClapTrap

all:			$(NAME)

$(NAME):		$(OBJS) Makefile $(SRCS_HPP)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.cpp *.hpp
		$(CC) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
