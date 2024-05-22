# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 21:58:44 by mayache-          #+#    #+#              #
#    Updated: 2024/05/22 21:59:39 by mayache-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRCS = main.cpp\
		iter.cpp\

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