#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  Function that allocate memory
 *@b: unsigned int
 * Return: .
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
