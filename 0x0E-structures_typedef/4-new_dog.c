#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function with dog_t type
 * @name: a pointer to a char
 * @age: float type
 * @owner: a pointer to a char
 *
 * Return: a dog_t type
 * Description: function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
