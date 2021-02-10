#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * The string Last digit of n
 * Return: 0
 */

int main(void)
{
	int n;
	int lastnu;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnu = n % 10;
	if (lastnu > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnu);
	}
	else if (lastnu == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnu);
	}
	else if (lastnu < 6 && lastnu != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnu);
	}
	return (0);
}
