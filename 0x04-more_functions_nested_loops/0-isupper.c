#include "holberton.h"

/**
 * _isupper - function checks for uppercase character
 * @c: input value
 * Return: integer zero or one
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
