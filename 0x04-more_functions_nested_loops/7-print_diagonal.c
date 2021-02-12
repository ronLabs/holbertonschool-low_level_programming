#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line in terminal
 * @n: number of "\" to print
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar(92);
				else if (i > j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
