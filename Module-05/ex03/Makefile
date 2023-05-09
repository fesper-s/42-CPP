# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 16:05:19 by fesper-s          #+#    #+#              #
#    Updated: 2023/05/08 22:27:14 by fesper-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

SRCS = ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp PresidentialPardonForm.cpp ./Intern.cpp

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
