#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: value
 * @n: pointer to int
 * Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
