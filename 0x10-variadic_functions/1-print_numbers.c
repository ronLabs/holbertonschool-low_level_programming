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

	if (separator == NULL)
		separator = NULL;
	if (n == 0)
		return;
	va_start(alist, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(alist, int);
		if (i == n - 1)
			printf("%d\n", value);
		else
			printf("%d%c ", value, *separator);
	}
	va_end(alist);
}
