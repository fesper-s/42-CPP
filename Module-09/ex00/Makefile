# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 17:37:06 by fesper-s          #+#    #+#              #
#    Updated: 2023/06/18 16:52:46 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRCS = ./main.cpp ./BitcoinExchange.cpp

OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	c++ -c $< $(CPPFLAGS) -o $@

$(NAME): $(OBJS)
	c++ $^ $(CPPFLAGS) -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
