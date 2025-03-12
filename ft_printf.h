
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *mod, ...);

ssize_t	ft_putnbr_base(int nbr, char *base);

ssize_t	ft_putlong_base(unsigned long num, char *base);

ssize_t	ft_printmem(void *ptr);

ssize_t	ft_putchar(char c);

ssize_t	ft_putstr(char *s);

size_t	ft_strlen(const char *str);

#endif