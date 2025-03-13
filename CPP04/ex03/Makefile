NAME = output
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp GarbageCollector.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean






# AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp