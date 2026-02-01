NAME        = ex02
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98
HEADER		= AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp Brain.hpp
SRCS        = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp Brain.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re