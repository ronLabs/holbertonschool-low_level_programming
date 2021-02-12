#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int lcase = 122;

	while (lcase > 96)
	{
		putchar(lcase);
		lcase -= 1;
	}
	putchar('\n');
	return (0);
}
