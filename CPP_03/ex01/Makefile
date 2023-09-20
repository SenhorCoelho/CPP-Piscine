NAME	= scavtrap

DEPS	= ClapTrap.hpp\
		ScavTrap.hpp

SRCS	= ClapTrap.cpp\
		ScavTrap.cpp\
		main.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wpedantic

.cpp.o	:
		$(CC) $(CFLAGS) -c $(<) -o $(<:.cpp=.o)

all		: $(NAME)


$(NAME)	: $(DEPS) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

re		: fclean all

clean	:
		rm -f $(OBJS)

fclean	: clean
		rm -f $(NAME)

.PHONY	: all re clean fclean

MAKEFLAGS	+= --silent