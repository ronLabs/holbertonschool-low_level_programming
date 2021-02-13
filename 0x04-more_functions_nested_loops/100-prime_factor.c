#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of a number
 * 612852475143
 * Return: 0.
 */

int main(void)
{
	long n = 612852475143;
	long div = 2;
	long lg_prim = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n = n / div;
			lg_prim = div;
		}
		div += 1;
	}
	printf("%ld\n", lg_prim);
	return (0);
}
