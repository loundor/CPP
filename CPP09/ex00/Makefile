# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stissera <stissera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 13:13:34 by stissera          #+#    #+#              #
#    Updated: 2023/04/23 13:13:36 by stissera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = btc

SRC =	./main.cpp \
		./BitcoinExchange.cpp

OBJS =	./main.o \
		./BitcoinExchange.o

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++11 -Wshadow -g -fsanitize=address

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS):	$(SRC)
			@$(CC) $(CFLAGS) -c $(SRC)

all:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

PHONY:		all clean fclean re
