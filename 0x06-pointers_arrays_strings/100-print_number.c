#include "holberton.h"
/**
 * print_number - function that prints an integer
 * @n: a number integer
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int n1, n2, n3, n4, n5, n6;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar('0');
	if (n >= 1 && n <= 99)
	{
		n1 = n / 10;
		n2 = n % 10;
		_putchar(n1 + '0');
		_putchar(n2 + '0');
	}
	if (n >= 100 && n <= 999)
	{
		n1 = n / 100;
		n2 = n % 100;
		n3 = n2 / 10;
		n4 = n2 % 10;
		_putchar(n1 + '0');
		_putchar(n3 + '0');
		_putchar(n4 + '0');
	}
	if (n >= 1000 && n <= 9999)
	{
		n1 = n / 1000;
		n2 = n % 1000;
		n3 = n2 / 100;
		n4 = n2 % 100;
		n5 = n4 / 10;
		n6 = n4 % 10;

		_putchar(n1 + '0');
		_putchar(n3 + '0');
		_putchar(n5 + '0');
		_putchar(n6 + '0');
	}
}
