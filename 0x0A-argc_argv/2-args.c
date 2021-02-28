#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector pointer to a string
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);/*print each element of argv*/
	}
	return (0);
}
