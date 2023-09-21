NAME	=	abstract

DEPS	=	Animal.hpp\
		Dog.hpp\
		Cat.hpp\
		WrongAnimal.hpp\
		WrongCat.hpp\
		Brain.hpp

SRCS	=	Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp\
		main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wpedantic

.cpp.o	:
		$(CC) $(CFLAGS) -c $(<) -o $(<:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(DEPS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

re		:	fclean all

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

.PHONY	:	all re clean fclean

MAKEFLAGS +=	--silent