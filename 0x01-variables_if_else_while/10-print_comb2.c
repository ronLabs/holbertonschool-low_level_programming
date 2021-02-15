#include <stdio.h>

/**
 * main - print numbers from 00 to 99 with a comma and a space
 * Return: nothing
 */
int main(void)
{
	short n1 = 48;
	short n2 = 48;

	while (n1 <= 57)
	{
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 57 || n2 != 57)
			{
				putchar(44);
				putchar(32);
			}
			n2++;
		}
	n1++;
	n2 = 48;
	}
	putchar('\n');
	return (0);
}
