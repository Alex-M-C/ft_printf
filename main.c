#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	char c = 'A';
	char *s = "Hello, world!";
	void *p = (void *)s;
	int d = -42;
	int i = INT_MAX;
	unsigned int u = UINT_MAX;
	int x = 37359259;
	int X = 37359259;
	int len1, len2;

	// Casos básicos
	len1 = printf("1. Caracter (original): %c\n", c);
	len2 = ft_printf("1. Caracter (copia   ): %c\n", c);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("2. Cadena (original): %s\n", s);
	len2 = ft_printf("2. Cadena (copia   ): %s\n", s);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("3. Puntero (original): %p\n", p);
	len2 = ft_printf("3. Puntero (copia   ): %p\n", p);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("4. Entero (d) (original): %d\n", d);
	len2 = ft_printf("4. Entero (d) (copia   ): %d\n", d);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("5. Entero (i) (original): %i\n", i);
	len2 = ft_printf("5. Entero (i) (copia   ): %i\n", i);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("6. Unsigned (original): %u\n", u);
	len2 = ft_printf("6. Unsigned (copia   ): %u\n", u);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("7. Hexadecimal (x) (original): %x\n", x);
	len2 = ft_printf("7. Hexadecimal (x) (copia   ): %x\n", x);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("8. Hexadecimal (X) (original): %X\n", X);
	len2 = ft_printf("8. Hexadecimal (X) (copia   ): %X\n", X);
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	len1 = printf("9. Porcentaje (original): %%\n");
	len2 = ft_printf("9. Porcentaje (copia   ): %%\n");
	printf("(printf: %d, ft_printf: %d)\n\n", len1, len2);

	return (0);
}
