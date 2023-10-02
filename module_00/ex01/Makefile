# Compiler and flags
CXXFLAGS = -Wall -Wextra -Werror -I.
CXX = clang++

SRCS = main.cpp\
		PhoneBook.cpp\
		util.cpp\

OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:			all clean fclean re
