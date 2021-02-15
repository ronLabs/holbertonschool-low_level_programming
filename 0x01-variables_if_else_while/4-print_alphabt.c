#include <stdio.h>

/**
 * main - print lowercases except q and e
 * Return: nothing
 */
int main(void)
{
	char low;

	for (low = 97; low <= 122; low++)
	{
		if (low != 101 && low != 113)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
