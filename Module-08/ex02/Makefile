# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 12:57:06 by fesper-s          #+#    #+#              #
#    Updated: 2023/05/26 12:57:06 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutatedAbomination

SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJS)
	c++ $^ $(CPPFLAGS) -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
