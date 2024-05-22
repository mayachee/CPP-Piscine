# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 21:17:35 by mayache-          #+#    #+#              #
#    Updated: 2024/05/22 21:59:18 by mayache-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRCS = main.cpp\
		functions.cpp\

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