#include "holberton.h"

/**
 * _isupper - function checks for uppercase character
 * @c: input value
 * Return: integer zero or one
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
