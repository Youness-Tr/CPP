NAME = PhoneBook
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp contact.cpp phonebook.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(Cxx) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all