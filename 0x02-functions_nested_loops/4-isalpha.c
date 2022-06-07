#include "main.h"

/**
 * _isalpha - determines if @c is a letter
 * @c: parameter passed
 *
 * Return: 1 if true, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
