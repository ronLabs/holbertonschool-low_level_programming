#include <stdio.h>

/**
 * print_elem - prints an integer
 * @elem: the integer to print
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
	for (i = 0; i < size; i++)
		action(a[i]);
}
