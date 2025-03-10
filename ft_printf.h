
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		ft_printf(char const *mod, ...);

ssize_t	ft_putnbr_base(int nbr, char *base);

#endif