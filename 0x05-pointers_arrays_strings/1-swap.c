#include "main.h"

/**
 * swap_int - function that swaps values of 2 variables
 * @a: first pointer argument passed
 * @b: second pointer argument passed
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;

}
