#include "holberton.h"

/**
 * _puts - function prints a string, followed by a new line
 * @str: pointer to a string
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < 63; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
