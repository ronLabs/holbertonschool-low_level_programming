#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog characteristics
 * @name: name of dog, a pointer to type char
 * @age: age of dog, a pointer to type age
 * @owner: the owner, a pointer to type char
 *
 * Description: stores dog characteristics
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
