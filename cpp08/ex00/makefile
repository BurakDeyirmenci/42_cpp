NAME = easyfind

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERFILE = easyfind.hpp
SRC_FILES = main.cpp
OBJS := $(SRC_FILES:.cpp=.o)

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

RM = rm -rf
ERRIGNORE = 2>/dev/null

all: $(NAME)
	@echo "$(BLUE)█ $(YELLOW)Creating$(RESET) $(NAME):\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@echo "$(BLUE)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"

head:
	@echo "$(BLUE)█████████████████████████ Making Files █████████████████████████$(RESET)"

# making rules
$(NAME): head $(HEADERFILE) $(OBJS)
	@$(CC) -I $(HEADERFILE) $(OBJS) -o $@

main.o: main.cpp $(HEADERFILE)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERFILE) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "$(RED)deleting$(RESET): " objects
	@$(RM) $(OBJS)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all

phony: all head main.o clean re