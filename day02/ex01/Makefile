NAME		= fixed_01

SRCS	=	main.cpp \
			Fixed.cpp

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	#-fsanitize=address#-Wall -Werror -Wextra
RM				= rm -f

NAME			= fixed_01

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.cpp *.hpp Makefile
		$(CC) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
