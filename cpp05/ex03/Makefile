NAME = form
SRC = Bureaucrat.cpp AForm.cpp Intern.cpp ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp 
HEADER = Bureaucrat.hpp AForm.hpp Intern.hpp ShrubberyCreationForm.hpp\
	RobotomyRequestForm.hpp PresidentialPardonForm.hpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
WHITE		=	\033[0;97m

start:
			@echo "$(YELLOW)Start Make:$(WHITE)"
			@make all
			
all: $(NAME)

$(NAME): $(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)ex03 Done!$(WHITE)"

%.o : %.c $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(BLUE)ex03: object files have been cleaned!$(WHITE)"


fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)ex03: files have been cleaned!$(WHITE)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ex00\n$(WHITE)"


.PHONY: all clean fclean re