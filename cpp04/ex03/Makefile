SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	materia

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS)  -o $@ $^

%.o:		%.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re