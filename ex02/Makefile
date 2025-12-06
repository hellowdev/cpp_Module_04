CXX = c++

NAME = myprog

CXXFLAGS = -Wall -Wextra -Werror 

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongCat.cpp  WrongAnimal.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp  Cat.hpp Dog.hpp Animal.hpp WrongCat.hpp  WrongAnimal.hpp Brain.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all