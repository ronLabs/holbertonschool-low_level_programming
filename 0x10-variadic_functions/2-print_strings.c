#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line
 * @separator: a pointer to a char
 * @n: numbers of parameters
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alist;
	unsigned int i;
	char *str;/*Pointer to a string*/

	va_start(alist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(alist, char*);/*el formato %s me pide (char*) */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != 0 && i < n - 1)/*If separator is NULL dont print it*/
			printf("%s", separator);
	}
	va_end(alist);
	printf("\n");
}
