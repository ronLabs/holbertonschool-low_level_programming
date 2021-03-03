#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: string s1
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	i = 0;
	j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(p + k) = *(s1 + k);
	}
	for (l = 0; l < j; l++)
	{
		*(p + (i + l)) = *(s2 + l);
	}
	p[i + j] = '\0';
	return (p);
}
