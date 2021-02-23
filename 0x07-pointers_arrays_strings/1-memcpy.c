#include "holberton.h"
/**
 * _memcpy - function that fills memory with a constant byte.
 * @src: source position
 * @dest: dest position
 * @n: size of bytes
 * Return: pointer to a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
