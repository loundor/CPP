NAME	=	Animal
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow
SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp
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