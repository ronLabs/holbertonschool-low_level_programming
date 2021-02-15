#include <stdio.h>

/**
 * main - print lowercases
 * Return: nothing
 */
int main(void)
{
	char low;

	for (low = 97; low <= 122; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
