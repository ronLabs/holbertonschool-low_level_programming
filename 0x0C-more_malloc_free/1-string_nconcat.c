#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: a pointer to a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
		i = 0;
	else
		i = 0;
		while (s1[i] != '\0')
			i++;
	if (s2 == NULL)
		j = 0;
	else
		j = 0;
		while (s2[j] != '\0')
			j++;
	if (n >= j)
		n = j;
	k = i + n + 1;
	p = malloc(k * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < i ; l++)
		p[l] = s1[l];
	for (l = 0; l < n; l++)
		p[l + i] = s2[l];
	p[i + n] = '\0';
	return (p);
}
