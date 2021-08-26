NAME		=	phone_book

SRCS	=	main.cpp \
			phonebook.cpp \
			contact.cpp


OBJS			= $(SRCS:.cpp=.o)

CC				= clang++	-Wall -Wextra -Werror
RM				= rm -f

NAME			= phone_book

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.c Makefile phonebook.hpp
		$(CC) $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
