#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: value
 * @m: value
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int j;

	j = n ^ m;
	while (j)
	{
		i += j & 1;
		j = j >> 1;
	}
	return (i);
}
