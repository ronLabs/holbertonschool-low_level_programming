#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: a pointer to an array
 * @size: a datatype of unsigned integer
 * @action: a pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int *a;

	a = array;
	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(a[i]);
}
