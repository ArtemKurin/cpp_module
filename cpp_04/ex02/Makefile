NAME		= Animal

SRCS		= main.cpp Cat.cpp Dog.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS 		= $(SRCS:.cpp=.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

%.o : %.cpp Cat.hpp Dog.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re