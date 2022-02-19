NAME		= karen

SRCS		= main.cpp Karen.cpp
OBJS 		= $(SRCS:.cpp=.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(SRCS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re