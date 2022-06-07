#include "main.h"

/**
 * _islower - identifies lower case letters
 * @c: the argument passed
 * Return: 1 if true, else 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
