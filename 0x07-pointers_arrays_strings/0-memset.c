#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pontier to a char
 * @b: constant byte
 * @n: size of bytes
 * Return: pointer to a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
