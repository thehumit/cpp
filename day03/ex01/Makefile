NAME		= ScavTrap

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp
			

SRCS_HPP	= ClapTrap.hpp \
				ScavTrap.hpp

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	-Wall -Werror -Wextra
RM				= rm -f

NAME			= ScavTrap

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
