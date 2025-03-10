
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "printf.h"
#include "libft/libft.h"

ssize_t	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	return (write(1, s, ft_strlen(s)));
}

ssize_t	ft_putchar(char c)
{
	char	*c_ptr;

	c_ptr = &c;
	return (write(1, c_ptr, 1));
}

// else if (mod[i] == 'p')
// 	/* code */
// else if (mod[i] == 'd')
// 	/* code */
static ssize_t	ft_format(ssize_t i, char const c, va_list args)
{
	ssize_t	temp;

	temp = i;
	if (c == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'i')
		i = ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (c == 'u')
		i = ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')
		i = ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
		i = ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	else if (c == '%')
		i = ft_putchar('%');
	if (i < 0)
		return (-1);
	else
		return (i + temp);
}

int	ft_printf(char const *mod, ...)
{
	va_list	args;
	size_t	i;
	ssize_t	n_char;

	va_start(args, mod);
	i = -1;
	n_char = 0;
	while (mod[++i] != '\0' && n_char >= 0)
	{
		if (mod[i] == '%')
			n_char = ft_format(n_char, mod[++i], args);
		else
		{
			if (write(1, &(mod[i]), 1) == -1)
				return (-1);
			n_char++;
		}
	}
	va_end(args);
	if (n_char == -1)
		return (-1);
	return (n_char);
}

#include <stdio.h>

int	main(void)
{
	int	check;
	int	original;

	original = printf("O: Hola %c que ase %s%c %x\n", ',', "Manolololo", '!', 124);
	check = ft_printf("C: Hola %c que ase %s%c %x\n", ',', "Manolololo", '!', 124);
	printf("Original: %d\nCopy: %d\n", original, check);
	return (0);
}
