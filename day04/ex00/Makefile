NAME		= ClapTrap

SRCS	=	Animal.cpp \
		   	Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			WrongDog.cpp \
			main.cpp 
			

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	#-fsanitize=address#-Wall -Werror -Wextra
RM				= rm -f

NAME			= ClapTrap

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
