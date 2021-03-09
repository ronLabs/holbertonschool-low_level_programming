#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;/*Defining a new type dog_t as a new name for the type struct dog */

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
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog type
 * @name: a pointer to a char
 * @age: float
 * @owner: a pointer to a char
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog type
 * Return: nothing
 */
void print_dog(struct dog *d);
#endif
