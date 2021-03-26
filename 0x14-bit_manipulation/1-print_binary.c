#include "holberton.h"
#define CHAR_BITS 8
/**
 * print_binary - Convert a number to a binary
 * @n: number to convert
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int sup = CHAR_BITS*sizeof(int);

	while(sup >= 0)
	{
		if(n & (((long int)1) << sup))
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
		sup--;
	}
	printf("\n");
}
