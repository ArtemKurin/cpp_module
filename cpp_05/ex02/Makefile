NAME		= Bureaucrat

SRCS		= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS 		= $(SRCS:.cpp=.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

%.o : %.cpp Bureaucrat.hpp Makefile Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re