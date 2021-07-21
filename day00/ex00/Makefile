NAME		=	megaphone

SRCS	=	megaphone.cpp


OBJS			= $(SRCS:.cpp=.o)

CC				= clang++ -Wall -Wextra -Werror
RM				= rm -f

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.c Makefile
		$(CC) $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
