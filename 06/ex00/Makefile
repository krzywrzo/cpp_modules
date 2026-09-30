NAME        = ex00
CC          = c++
# CFLAGS      = -Wall -Wextra -Werror -std=c++98
CFLAGS	= -std=c++98
HEADER		= helpers.hpp ScalarConverter.hpp
SRCS        = ScalarConverter.cpp helpers.cpp converters.cpp main.cpp
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