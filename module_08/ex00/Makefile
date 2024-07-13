# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 11:05:22 by mayache-          #+#    #+#              #
#    Updated: 2024/07/13 14:41:17 by mayache-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easyfind
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRCS = main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:			all clean fclean re