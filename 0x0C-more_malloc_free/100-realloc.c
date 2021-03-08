#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a void ptr
 * @old_size: the old size of ptr
 * @new_size: the new size of ptr
 * Return: a new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_array;
	unsigned int i;
	char *rell, *cpy_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_array = malloc(new_size);
		if (new_array == NULL)
			return (NULL);
		return (new_array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_array = malloc(new_size);
	if (new_array == NULL)
		return (NULL);
	rell = (char *)new_array;
	cpy_ptr = (char *)ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		rell[i] = cpy_ptr[i];
	}
	free(ptr);
	return (rell);
}
