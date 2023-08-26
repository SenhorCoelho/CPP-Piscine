NAME		= harl

DEPS		= Harl.hpp

SRCS		= main.cpp\
			Harl.cpp

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
