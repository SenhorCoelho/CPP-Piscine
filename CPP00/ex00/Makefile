NAME = megaphone

SRCS = megaphone.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRCS)
			$(CC) $(CFLAGS) $(SRCS)	-o $(NAME)	

re: clean all

clean: 
		rm $(NAME)

.PHONY: all re clean
