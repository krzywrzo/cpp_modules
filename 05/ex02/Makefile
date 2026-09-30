NAME        = Bureaucrat
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98
HEADER      = AForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Bureaucrat.hpp RobotomyRequestForm.hpp
SRCS        = AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp RobotomyRequestForm.cpp main.cpp
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