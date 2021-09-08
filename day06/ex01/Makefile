NAME		= convert

SRCS	=	main.cpp
			

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	#-fsanitize=address#-Wall -Werror -Wextra
RM				= rm -f

NAME			= convert

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
