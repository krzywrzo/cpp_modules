NAME        = phonebook
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98
HEADERS     = phoneBook.hpp
SRCS        = main.cpp pb_utils.cpp contact_utils.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re