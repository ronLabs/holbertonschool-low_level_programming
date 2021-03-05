#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: a pointer to an integer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;
	
	if (min > max)
	{
		return (NULL);
	}
	j = ((max - min) + 1);
	p = malloc(sizeof(int) * j);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}
	return(p);
}
