#include "holberton.h"

/**
 * swap_int - function swaps two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
