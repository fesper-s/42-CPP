# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 17:31:39 by fesper-s          #+#    #+#              #
#    Updated: 2023/02/18 17:34:15 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Zombie.cpp ./newZombie.cpp ./randomChump.cpp

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
