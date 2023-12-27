NAME = game
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
CXX = c++

SRCS = main.cpp\
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\


OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
		@echo "make it"

clean:
		@rm -f $(OBJS)
		@echo "clean game"

fclean: clean
		@rm -f $(NAME)
		@echo "fclean game"


re:	fclean $(NAME)

.PHONY:			all clean fclean re
