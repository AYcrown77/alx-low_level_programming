#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
