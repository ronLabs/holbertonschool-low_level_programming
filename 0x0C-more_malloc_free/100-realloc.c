#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a void ptr
 * @old_size: the old size of ptr
 * @new_size: the new size of ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_array;
	int limit, i;
	char *rell, *ptr_copy;
	
	if (new_size > old_size)
	{
		limit = new_size;
		new_array = malloc(new_size);
		if (new_array == NULL)/*valida que exista espacio en memoria*/
			return (NULL);
	}
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
	rell = (char *)new_array;/*convierte el array void a un array char*/
	ptr_copy = (char *)ptr;/*convierte el puntero void a un puntero char*/
	for (i = 0; i < limit; i++)
	{
		rell[i] = ptr_copy[i];
	}
	return (rell);
}
