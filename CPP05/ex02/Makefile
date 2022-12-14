NAME	=	28B
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -g
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS	=	$(SRCS:.cpp=.o)
RM		=	rm -rf

all		:	$(NAME)

%.o: %.cpp
			$(COMPILE.c) $< $(WARNING) -o $@

$(NAME)	:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re