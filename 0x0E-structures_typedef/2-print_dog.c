#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: type struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)/*if the d element name is empty*/
			printf("Name : (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);/*a float cant be NULL*/
		if (d->owner == NULL)/*if the d element owner is empty*/
			printf("Owner : (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
