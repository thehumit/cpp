NAME		= fixed_01

SRCS	=	main.cpp \
			Fixed.cpp

SRCS_HPP = Fixed.hpp

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	-Wall -Werror -Wextra
RM				= rm -f

NAME			= fixed_01

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
