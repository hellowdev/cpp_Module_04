CXX = c++

NAME = myprog

CXXFLAGS = -Wall -Wextra -Werror 

SRC = main.cpp AMateria.cpp Ice.cpp Character.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp  AMateria.hpp Ice.hpp ICharacter.hpp Character.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all