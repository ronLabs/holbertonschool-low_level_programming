#include "holberton.h"

/**
 * _puts_rev_recursion - function that prints a string in reverse.
 * @s: pointer to a char
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
