#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: input value
 * Return: integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
