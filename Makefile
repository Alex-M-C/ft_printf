# Executable name
NAME = libftprintf.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
FILES = ft_printf.c ft_putnbr_base.c ft_printf_utils.c
OBJECTS = $(FILES:.c=.o)

# Library path
LIBDIR = ./libft
LIBFT = $(LIBDIR)/libft.a

# Default rule: compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJECTS) $(LIBFT)
	ar rcs $(NAME) $(OBJECTS) $(LIBFT)

%.o: %.c ft_printf.h $(LIBDIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBDIR) all

# Clean compiled objects
clean:
	$(MAKE) -C $(LIBDIR) clean
	rm -f $(OBJECTS)

# Clean everything
fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	rm -f $(NAME)

# Recompile everything
re: fclean all

# Indicate that these are not files
.PHONY: all clean fclean re
