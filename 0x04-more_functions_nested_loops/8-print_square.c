#include "holberton.h"

/**
 * print_square - Draws a square in terminal
 * @n: number of "#" per line to print
 * Return: nothing
 */
void print_square(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(35);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
