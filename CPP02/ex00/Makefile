NAME	=	Fixed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
SRCS	=	main.cpp Fixed.cpp
INCLUDE	=	Fixed.hpp
OBJS	=	$(SRCS:.cpp=.o)
RM		=	rm -rf

all		:	$(NAME)

##%.o: %.cpp
##			$(COMPILE.c) $< $(WARNING) -o $@

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) $(INCLUDE) -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re