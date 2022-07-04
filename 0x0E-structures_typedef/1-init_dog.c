#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer of struct type
 * @name: second argment
 * @age: third argument
 * @owner: 4th argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
