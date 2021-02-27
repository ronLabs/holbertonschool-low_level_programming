#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: Array containing the arguments
 * Return: nothing
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
