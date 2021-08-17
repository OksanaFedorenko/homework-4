# -*- Makefile -*-
# compiler
CC = gcc

NAME = mylib.a
CFLAGS = -Wall -Wextra -Werror -c

FILES = ft_isalpha.c\
        ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_toupper.c\

# objects
OBJS = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[37;1;42mstrings library compiling...\033[0m"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

main: $(FILES)
	$(CC) $(CFLAGS) main.c

clean:
	rm -rf *.exe *.o *.out