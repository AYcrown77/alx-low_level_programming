#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  function that frees dogs
 * @d: pointer to the struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
