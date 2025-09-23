NAME = horde
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O2
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp 
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<..."

clean:
	@rm -f $(OBJS)
	@echo "Object file cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Executable cleaned."

re: fclean all

.PHONY: all clean fclean re