NAME	= 	PhoneBook
SRCS	= 	main.cpp PhoneBook.cpp Contact.cpp
INCLUDE	=	Contact.hpp PhoneBook.hpp
CC		= 	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98 -g
OBJS	=	$(SRCS:%.cpp=%.o)
RM		=	rm -rf

all		:	$(NAME)

%.o: %.cpp
			$(COMPILE.c) $< $(WARNING) -o $@

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re