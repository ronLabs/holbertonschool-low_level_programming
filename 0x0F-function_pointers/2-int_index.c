#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 * @array: a pointer to an integer
 * @size: number of elements in the array
 * @cmp: a pointer to a function that compare
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
