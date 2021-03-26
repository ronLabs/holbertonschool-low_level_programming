#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: value.
 * @n: int value.
 * Return: an Integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);
}
