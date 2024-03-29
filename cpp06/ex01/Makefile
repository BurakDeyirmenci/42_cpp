NAME 		= serializer
SRCS		= main.cpp Data.cpp Serializer.cpp
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
OBJS 		= $(SRCS:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY : all fclean clean re