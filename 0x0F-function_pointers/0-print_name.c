#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: a name we want to print
 * @f: a pointer to a function with a pointer to char as a parameter
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *) = f;

	(*p)(name);
}
