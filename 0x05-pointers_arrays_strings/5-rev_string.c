#include "holberton.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer to a char
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
