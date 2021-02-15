#include <stdio.h>

/**
 * main - print lowercases in reverse
 * Return: nothing
 */
int main(void)
{
	char low;

	for (low = 122; low >= 97; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
