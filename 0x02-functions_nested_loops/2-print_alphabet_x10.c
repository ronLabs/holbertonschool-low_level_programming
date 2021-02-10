#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int abc = 'a';

		while (abc <= 'z')
		{
			_putchar(abc);
			abc += 1;
		}
		_putchar('\n');
		i++;
	}
}
