#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - 
 * @n: numbers of arguments
 *
 * Return: the total sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, valor;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}
	va_start (nums, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		valor = va_arg (nums, int);
		sum += valor;
	}
	va_end (nums);
	return (sum);
}
