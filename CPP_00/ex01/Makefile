NAME = phonebook

SRCS = Contact.cpp PhoneBook.cpp main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRCS) Contact.hpp PhoneBook.hpp
			$(CC) $(CFLAGS) $(SRCS)	-o $(NAME)	

re: clean all

clean: 
		rm $(NAME)

.PHONY: all re clean
