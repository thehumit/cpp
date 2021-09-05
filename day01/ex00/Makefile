NAME		= zombie

SRCS	=	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \

SRCS_HPP = Zombie.hpp

OBJS			= $(SRCS:.cpp=.o)

CC				= clang++	-Wall -Werror -Wextra
RM				= rm -f

# NAME			= zombie

all:			$(NAME)

$(NAME):		$(OBJS) Makefile $(SRCS_HPP)
				$(CC) -o ${NAME} ${OBJS}

%.o:	%.c *.hpp Makefile
		$(CC) -cpp $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
