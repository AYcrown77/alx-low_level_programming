#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to 2D arrays
 * @size: array size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i + j];
			}
		}
	}
	printf("%d, ",sum1);

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			if(i == j)
			{
				sum2 = sum2 + a[i + j];
			}
		}
	}
	printf("%d\n", sum2);
}
