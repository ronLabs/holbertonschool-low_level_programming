#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function, returns a pointer to 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **)malloc(sizeof(int) * height);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
