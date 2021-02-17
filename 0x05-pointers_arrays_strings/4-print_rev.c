#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @str: pointer to a char
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
