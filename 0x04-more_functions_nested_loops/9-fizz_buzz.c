#include <stdio.h>

/**
 * main - The Fizz-Buzz test interview question
 * descrip: multiples of 3, 5 , 3y5 prints Fizz, Buzz, FizzBuzz respectively
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
