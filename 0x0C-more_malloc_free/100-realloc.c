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
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr1[i] = ((char *)ptr)[i];
		}
	}

	free(ptr);

	return (ptr1);
}
