NAME	=	Harl
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
SRCS	=	main.cpp Harl.cpp
INCLUDE	=	Harl.hpp
OBJS	=	$(SRCS:%.cpp=%.o)
RM		=	rm -rf

all		:	$(NAME)

%.o: %.cpp
			$(COMPILE.c) $< $(WARNING) -o $@

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re