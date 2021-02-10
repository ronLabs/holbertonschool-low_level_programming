#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int row, col;
	int m = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			m = (row * col);
			if (m < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(m + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
