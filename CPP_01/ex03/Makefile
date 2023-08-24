NAME		= violence

DEPS		= Weapon.hpp\
			HumanA.hpp\
			HumanB.hpp	

SRCS		= main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp	

OBJS		= $(SRCS:.cpp=.o) 

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -Wpedantic

.cpp.o		:
			$(CC) $(CFLAGS) -c $(<) -o $(<:.cpp=.o)

all			: $(NAME)

$(NAME)		: $(OBJS) $(DEPS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


re			: fclean all

clean		:
			rm $(OBJS)
		

fclean		: clean
			rm -f $(NAME)
		

.PHONY		: all re clean fclean

MAKEFLAGS	+= --silent
