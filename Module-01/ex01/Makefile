# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 20:54:05 by fesper-s          #+#    #+#              #
#    Updated: 2023/02/18 21:26:44 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp

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
