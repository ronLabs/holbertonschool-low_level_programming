#include "holberton.h"

/**
 * _strlen_recursion - function that return a length of a string.
 * @s: string to receive
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s = s + 1;
	return (_strlen_recursion(s) + 1);
}
