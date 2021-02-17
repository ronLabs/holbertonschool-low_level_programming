#include "holberton.h"

/**
 * _puts - function prints a string, followed by a new line
 * @str: pointer to a char
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
