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
	if (ptr == NULL)
	{
		return;
	}

	if (ptr->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", ptr->name);
	}
	else
	{
		printf("Age: %f\n", ptr->age);
	}
	if (ptr->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
	printf("Owner: %s\n", ptr->owner);
	}
}
