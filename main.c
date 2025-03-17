#include <stdio.h>
#include <limits.h>

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
	char *nula = NULL;
	int len1, len2;
	
	// Casos básicos
	len1 = printf("1.  Caracter (original): %c\n", c);            len2 = ft_printf("1.  Caracter (copia   ): %c\n", c);            printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("2.  Cadena (original): %s\n", s);              len2 = ft_printf("2.  Cadena (copia   ): %s\n", s);              printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("3.  Puntero (original): %p\n", p);              len2 = ft_printf("3.  Puntero (copia   ): %p\n", p);              printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("4.  Entero (d) (original): %d\n", d);          len2 = ft_printf("4.  Entero (d) (copia   ): %d\n", d);          printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("5.  Entero (i) (original): %i\n", i);          len2 = ft_printf("5.  Entero (i) (copia   ): %i\n", i);          printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("6.  Unsigned (original): %u\n", u);            len2 = ft_printf("6.  Unsigned (copia   ): %u\n", u);            printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("7.  Hexadecimal (x) (original): %x\n", x);     len2 = ft_printf("7.  Hexadecimal (x) (copia   ): %x\n", x);     printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("8.  Hexadecimal (X) (original): %X\n", X);     len2 = ft_printf("8.  Hexadecimal (X) (copia   ): %X\n", X);     printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("9.  Porcentaje (original): %%\n");              len2 = ft_printf("9.  Porcentaje (copia   ): %%\n");              printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	// Casos especiales
	len1 = printf("10. Carácter nulo (original): %c\n", '\0');    len2 = ft_printf("10. Carácter nulo (copia   ): %c\n", '\0');    printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("11. Cadena nula (original): %s\n", nula);      len2 = ft_printf("11. Cadena nula (copia   ): %s\n", nula);      printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("12. Puntero nulo (original): %p\n", NULL);     len2 = ft_printf("12. Puntero nulo (copia   ): %p\n", NULL);     printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("13. INT_MIN (original): %d\n", INT_MIN);       len2 = ft_printf("13. INT_MIN (copia   ): %d\n", INT_MIN);       printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("14. INT_MAX (original): %d\n", INT_MAX);       len2 = ft_printf("14. INT_MAX (copia   ): %d\n", INT_MAX);       printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("15. UINT_MAX (original): %u\n", UINT_MAX);     len2 = ft_printf("15. UINT_MAX (copia   ): %u\n", UINT_MAX);     printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("16. Hexadecimal negativo (original): %x\n", -1); len2 = ft_printf("16. Hexadecimal negativo (copia   ): %x\n", -1); printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	len1 = printf("17. Entero 0 (original): %d\n", 0);            len2 = ft_printf("17. Entero 0 (copia   ): %d\n", 0);            printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);
	
	// Pruebas de múltiples argumentos
	len1 = printf("18. Múltiples valores (original): %d %s %x\n", 42, "test", 255);
	len2 = ft_printf("18. Múltiples valores (copia   ): %d %s %x\n", 42, "test", 255);
	printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	len1 = printf("19. Saltos de línea (original): %s\n", "Hola\nMundo");
	len2 = ft_printf("19. Saltos de línea (copia   ): %s\n", "Hola\nMundo");
	printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	len1 = printf("20. Hexadecimal con INT_MIN (original): %x\n", INT_MIN);
	len2 = ft_printf("20. Hexadecimal con INT_MIN (copia   ): %x\n", INT_MIN);
	printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	len1 = printf("21. Hexadecimal con INT_MAX (original): %x\n", INT_MAX);
	len2 = ft_printf("21. Hexadecimal con INT_MAX (copia   ): %x\n", INT_MAX);
	printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	len1 = printf("22. Triple porcentaje (original): %%%d%%\n", 42);
	len2 = ft_printf("22. Triple porcentaje (copia   ): %%%d%%\n", 42);
	printf(" Longitudes -> Original: %d | Copia: %d\n\n", len1, len2);

	return (0);
}
