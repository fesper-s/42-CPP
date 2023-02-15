# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 09:08:48 by fesper-s          #+#    #+#              #
#    Updated: 2023/02/15 09:10:56 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	c++ $^ $(CPPFLAGS) -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
