NAME		= megaphone
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= clang++

SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re