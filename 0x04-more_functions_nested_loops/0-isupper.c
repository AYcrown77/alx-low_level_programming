#include "main.h"

/**
 * _isupper - determines if a given argument is uppercase letter
 * @c: the argument passed
 * Return: 1 if true and 0 if not true
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
