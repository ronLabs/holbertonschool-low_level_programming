#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * Return: nothing
 */
int main(void)
{
	char num, letter;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
