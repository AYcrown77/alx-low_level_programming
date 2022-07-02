#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}

	free(ptr);

	return (ptr1);
}
