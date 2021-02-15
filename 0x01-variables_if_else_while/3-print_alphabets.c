#include <stdio.h>

/**
 * main - print lowercases and uppercase
 * Return: nothing
 */
int main(void)
{
	char low, upper;

	for (low = 97; low <= 122; low++)
	{
		putchar(low);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
