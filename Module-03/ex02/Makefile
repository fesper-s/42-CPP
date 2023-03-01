# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 10:38:24 by fesper-s          #+#    #+#              #
#    Updated: 2023/03/01 15:28:04 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragTrap

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp

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
