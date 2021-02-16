#include "holberton.h"

/**
 * _strlen - function return the length of string
 * @s: pointer to a string
 * Return: an integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
