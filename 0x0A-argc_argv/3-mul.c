#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector pointer to a string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
		return (0);
}
