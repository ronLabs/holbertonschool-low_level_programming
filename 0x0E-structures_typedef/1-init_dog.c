#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a struct dog
 * @d: a pointer to struct dog
 * @name: a pointer to char
 * @age: a float type
 * @owner: a pointer to a char
 *
 * Description: function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

