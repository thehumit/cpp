NAME		= ClapTrap

SRCS	=	main.cpp \
			Form.cpp \
			Bureaucrat.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp


SRCS_HPP = Form.hpp \
		Bureaucrat.hpp \
		PresidentialPardonForm.hpp \
		RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp
			

OBJS			= $(SRCS:%cpp=%o)

CC				= clang++	#-fsanitize=address#-Wall -Werror -Wextra
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
