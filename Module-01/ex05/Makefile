# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 16:34:04 by fesper-s          #+#    #+#              #
#    Updated: 2023/02/21 16:34:59 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Harl.cpp

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
