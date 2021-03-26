#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '1')
		{
			bin = bin << 1;
			bin = bin | 1;
		}
		else if (b[i] == '0')
			bin = bin << 1;
		else
			return (0);
		i++;
	}
	return (bin);
}
