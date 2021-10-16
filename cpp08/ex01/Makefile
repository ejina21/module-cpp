NAME	= containers
SRCS	= ./span.hpp ./span.cpp ./main.cpp
CFLAGS	= -Wall -Werror -Wextra -std=c++98
CC		= clang++

all: $(SRCS) $(NAME)
$(NAME): $(SRCS)
			$(CC) $(CFLAGS) -I$(SRCS) -o $(NAME)
clean:
			rm -f $(NAME)
re: clean all
