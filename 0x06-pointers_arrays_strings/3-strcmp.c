#include "holberton.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: pointer to char source1
 * @s2: pointer to char source2
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int aux;

	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			aux = s1[i] - s2[i];
			return (aux);
		}
		else if (s1[i] < s2[i])
		{
			aux = s1[i] - s2[i];
			return (aux);
		}
		i++;
	}
	return (0);
}
