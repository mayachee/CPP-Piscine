# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 17:30:13 by mayache-          #+#    #+#              #
#    Updated: 2024/07/13 16:06:47 by mayache-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantStack
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