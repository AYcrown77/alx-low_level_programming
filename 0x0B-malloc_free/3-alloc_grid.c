#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: columns of the array
 * @height: rows of the array
 * Return:  a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
