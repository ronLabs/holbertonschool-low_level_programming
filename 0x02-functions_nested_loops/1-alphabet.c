#include "holberton.h"

/**
 * print_alphabet - function that prints the alpphabet in lowercase
 * Only use _putchar twice in your code
 * Return: void
 */
void print_alphabet(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc += 1;
	}
	_putchar('\n');
}
