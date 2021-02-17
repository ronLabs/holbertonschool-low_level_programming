#include "holberton.h"

/**
 * _strcpy - Function that copies the string pointed to by src,
 * to buffer pointed to by dest
 * @dest: pointer to char
 * @src: pointer to char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i < 98; i++)
	{
		dest[i] = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
