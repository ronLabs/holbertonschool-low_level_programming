#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * check_digit - checks if a given char is number or not
 * @a: input char
 * Return: int
 **/

int digitchecker(char *c)
{
	int num, length, i;

	num = 0;
	i = 0;
	length = strlen(c);
	while (i < length)
	{
		if (c[i] < '0' || c[i] > '9')/*for no numbers*/
			return (-1);
		else 
			num = num * 10 + (c[i] - '0');/*forming the number*/
		i++;
	}
	return (num);
}

/**
 * main - program that adds two numbers
 * @argc: argument counter
 * @argv: argument vector pointer to a string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = digitchecker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (0);
		}
		else
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
