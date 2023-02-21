# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 19:20:08 by fesper-s          #+#    #+#              #
#    Updated: 2023/02/20 19:26:30 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = not_sed

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
