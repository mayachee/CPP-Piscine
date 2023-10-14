CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = clang++

SRCS = main.cpp\
		PhoneBook.cpp\
		contact.cpp\

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
