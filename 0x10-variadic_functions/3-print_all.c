#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function that prints anything, followed by a new line
 * @format: give the format of each elements
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list nlist;
	int i, flag;
	char *c;/*a pointer to string*/

	i = 0;
	va_start(nlist, format);
	while (format[i] && format)
	{
		flag = 1;/*si no lo declaro en 1, el valor de flag sería 0 por defecto*/
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(nlist, int));
				break;
			case 'i':
				printf("%d", va_arg(nlist, int));
				break;
			case 'f':
				printf("%f", va_arg(nlist, double));
				break;
			case 's':
				c = va_arg(nlist, char *);
				if (c == 0)
					c = "(nil)";
				printf("%s", c);
				break;
			default:
				flag = 0;
				break;
		}
		if (format[i + 1] != '\0' && flag != 0)
		/*[i+1]para que se iguale a vacio y sea haga falso*/
			printf(", ");
		i++;
	}
	va_end(nlist);
	printf("\n");
}
