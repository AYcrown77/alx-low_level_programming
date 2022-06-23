#include "main.h"
/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the sqrt
 * @i: iterate number
 * Return: the natural sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose sqrt is to be returned
 * Return: the sqrt of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
