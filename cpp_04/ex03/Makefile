NAME		= game

SRCS		= main.cpp AMateria.cpp MateriaSource.cpp Character.cpp Ice.cpp Cure.cpp
OBJS 		= $(SRCS:.cpp=.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

%.o : %.cpp AMateria.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp Ice.hpp Cure.hpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re