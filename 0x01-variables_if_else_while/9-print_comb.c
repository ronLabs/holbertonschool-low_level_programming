#include <stdio.h>

/**
 * main - print numbers separated with a comma and a space
 * Return: nothing
 */
int main(void)
{
	short num = 48;

	while (num < 57)
	{
		putchar(num);
		putchar(44);
		putchar(32);
		num++;
	}
	putchar(57);
	return (0);
}
