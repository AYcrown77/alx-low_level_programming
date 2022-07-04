#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	struct dog *ptr;

	ptr = d;

	printf("Name: %s\n", ptr->name);
	if (ptr->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", ptr->age);
	if (ptr->age == 0)
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", ptr->owner);
	if (ptr->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
}
