#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string given as a parameter
 * @str: string to copy
 * Return: a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
}
