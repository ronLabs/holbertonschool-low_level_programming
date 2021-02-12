#include "holberton.h"

/**
 * print_numbers - prints the numbers
 * Return: nothing
 */
void print_numbers(void)
{
	int num = 48;

	while (num >= 48 && num <= 57)
	{
		_putchar(num);
		num += 1;
	}
	_putchar('\n');
}
