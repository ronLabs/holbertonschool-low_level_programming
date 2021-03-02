#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of allocation of the memory 
 * @c: initialized char of the array
 * Return: a pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;
	
	a = malloc(sizeof(char) * size);/*reserva tamaño de memoria al pto a*/
	if (a == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
