#include <stdio.h>
#include "holberton.h"
/**
 * main - Program that prints its name
 * @argc: argument counter
 * @argv: argument vector pointer to a string
 * 
 * Return: an integer 
 */

int main( int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{	
		if (argc == 1)/*indiques position 1 of the string*/
			printf("%s\n", argv[i]);
		else
			break;
	}
	return (0);
}
