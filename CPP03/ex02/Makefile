NAME	=	ClapTrap
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INCLUDE	=	ClapTrap.hpp
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