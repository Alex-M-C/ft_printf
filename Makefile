#Executable name
NAME = libftprintf.a

#Compilator and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Variables
FILES = ft_printf.c	ft_printf_utils.c
OBJECTS = $(FILES:.c=.o)

#Default rule: compile all
all: $(NAME)

#Rule to create the library
$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar rcs $(NAME) $(OBJECTS)