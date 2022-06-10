#include "main.h"

/**
 * _isdigit - determines if a given argument is a number
 * @c: the argument passed
 * Return: 0 if true, 1 if not true
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
