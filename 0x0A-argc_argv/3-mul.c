#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector pointer to a string
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
	printf("%d\n", product);
	}
	else
		printf("Error\n");
		return (1);
	return (0);
}
