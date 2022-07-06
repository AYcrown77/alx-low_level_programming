#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the given array
 * @size: the number of elements in the array
 * @cmp: function pointer
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size == 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (1);
	}
	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret != 0)
		{
			return (i);
		}
	}
	return (-1);
}
