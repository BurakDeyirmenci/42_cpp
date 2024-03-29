### VARS ###

UNAME_S := $(shell uname -s)

### PROGRAM ###

NAME = out

### COMPILER ###

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

### SOURCES ###

SRC =	main.cpp			\
		AMateria.cpp		\
		MateriaSource.cpp	\
		Character.cpp		\
		Ice.cpp				\
		Cure.cpp			\


OBJ = $(SRC:%.cpp=%.o)

### RULES ###

PHONY := all
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

PHONY += sanitize
ifeq ($(UNAME_S),Linux)
sanitize: CXXFLAGS += -Wshadow -pedantic -g3 -fsanitize=address -fsanitize=leak -fsanitize=undefined -fsanitize=bounds -fsanitize=null
endif
ifeq ($(UNAME_S),Darwin)
sanitize: CXXFLAGS += -Wshadow -pedantic -g3 -fsanitize=address
endif
sanitize: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

PHONY += clean
clean:
	rm -rf $(OBJ)

PHONY += fclean
fclean: clean
	rm -rf $(NAME)

PHONY += re
re: fclean all

.PHONY: $(PHONY)
