#include "holberton.h"

/**
 * _strcpy - Function that copies the string pointed to by src,
 * to buffer pointed to by dest
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
