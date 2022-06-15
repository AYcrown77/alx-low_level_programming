#include "main.h"

/**
 * _strlen - counts the leght of a string
 * @s: string argument pased
 * Return: Nothing
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}

/**
 * print_rev - prints strings in reverse
 * @s: string argument pased
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len, i;

	/* calling _strlen() */
	len = _strlen(s);
	i = len;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
