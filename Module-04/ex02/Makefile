# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 10:32:38 by fesper-s          #+#    #+#              #
#    Updated: 2023/03/06 10:32:45 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Animal.cpp ./Dog.cpp ./Cat.cpp ./Brain.cpp

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
