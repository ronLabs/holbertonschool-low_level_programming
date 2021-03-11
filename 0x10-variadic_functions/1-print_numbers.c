#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: a pointer to a char
 * @n: numbers of parameters
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list alist;
	unsigned int i;
	int value;

	va_start(alist, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(alist, int);
		printf("%d", value);
		if (separator != 0 && i < n - 1)/*If separator is NULL dont print it*/
			printf("%s", separator);
	}
	va_end(alist);
	printf("\n");
}
